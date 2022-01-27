#include "fileOp.h"

//Recursively delete all the file in the directory.
int rm_dir(std::string dir_full_path) {
    DIR* dirp = opendir(dir_full_path.c_str());
    if(!dirp)
    {
        return -1;
    }
    struct dirent *dir;
    struct stat st;
    while((dir = readdir(dirp)) != NULL)
    {
        if(strcmp(dir->d_name,".") == 0
           || strcmp(dir->d_name,"..") == 0)
        {
            continue;
        }
        std::string sub_path = dir_full_path + '/' + dir->d_name;
        if(lstat(sub_path.c_str(),&st) == -1)
        {
            //Log("rm_dir:lstat ",sub_path," error");
            continue;
        }
        if(S_ISDIR(st.st_mode))
        {
            if(rm_dir(sub_path) == -1) // 如果是目录文件，递归删除
            {
                closedir(dirp);
                return -1;
            }
            rmdir(sub_path.c_str());
        }
        else if(S_ISREG(st.st_mode))
        {
            unlink(sub_path.c_str());     // 如果是普通文件，则unlink
        }
        else
        {
            //Log("rm_dir:st_mode ",sub_path," error");
            continue;
        }
    }
    if(rmdir(dir_full_path.c_str()) == -1)//delete dir itself.
    {
        closedir(dirp);
        return -1;
    }
    closedir(dirp);
    return 0;
}
 
//Remove files or dirs
bool Remove(std::string file_name) {
    std::string file_path = file_name;
    struct stat st;
    if (lstat(file_path.c_str(),&st) == -1) {
        return EXIT_FAILURE;
    }
    if (S_ISREG(st.st_mode)) {
        if (unlink(file_path.c_str()) == -1) {
            return EXIT_FAILURE;
        }
    }
    else if(S_ISDIR(st.st_mode)) {
        if(file_name == "." || file_name == "..") {
            return EXIT_FAILURE;
        }
        if(rm_dir(file_path) == -1)//delete all the files in dir.
        {
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}

//
int ReadData(std::istream &fin, Eigen::MatrixXd &m_matrix)
{
	int numRow = m_matrix.rows();
	int numCol = m_matrix.cols();

	Eigen::VectorXd vecPerRow(numRow);
	for (int j = 0; j < numRow; j++)//共numRow行
	{
		for (int i = 0; i < numCol; i++)//共numCol列组成一行
		{   
            if(!fin){
                //std::cout<<"done\n";
                return 0; //no next data
            }
			fin >> m_matrix(j, i);
		}	
	} 
    return 1;
    //std::cout<<++num;	
}

std::vector<float> eig2stdvec1( Eigen::MatrixXd _eigmat )
{
    std::vector<float> vec( _eigmat.data(), _eigmat.data() + _eigmat.size() );
    return vec;
} 

void ReadDataFrom(std::string _filepath, std::vector<Eigen::MatrixXd>  &_goalvector, int numRow, int numCol){
    Eigen::MatrixXd temp;
    temp.resize(numRow,numCol);
    std::ifstream fin(_filepath,std::ios::binary);
    if (!fin) {
        std::cout<<"[Error]No such file: "<<_filepath<<std::endl;
        return ;
    }
    int count=0;
    while(1){
        int code = ReadData(fin,temp);
        if (code==0){
            std::cout<<"[Read Done] "<< count << " datas are read from "<<_filepath<<std::endl;
            return ;
        }
        _goalvector.push_back(temp);
        count++;
    }
    return ;
}

void ReadDataFrom(std::string _filepath, std::vector<std::vector<float> >  &_goalvector, int numCol){
    std::vector<float> temp;
    Eigen::MatrixXd tmp;
    tmp.resize(1,numCol);
    std::ifstream fin(_filepath,std::ios::binary);
    if (!fin) {
        std::cout<<"[Error]No such file: "<<_filepath<<std::endl;
        return ;
    }
    int count=0;
    while(1){
        ReadData(fin,tmp);
        temp = eig2stdvec1(tmp);
        if (fin.eof()){
            std::cout<<"[Read Done] "<< count << " datas are read from "<<_filepath<<std::endl;
            return ;
        }
        _goalvector.push_back(temp);
        count++;
    }
    return ;
}

void ReadDataFrom(std::string _filepath, std::vector<double>  &_goalvector){
    std::ifstream fin(_filepath,std::ios::binary);
    if (!fin) {
        std::cout<<"[Error]No such file: "<<_filepath<<std::endl;
        return ;
    }
    int count=0;
    while(1){
        double temp;
        fin>>temp;
        if (!fin) {
            std::cout<<"[Read Done] "<< count << " datas are read from "<<_filepath<<std::endl;
            return ;
        }
        _goalvector.push_back(temp);
        count++;
    }
    return ;
}
/* test sks
int main()
{
	std::vector<Eigen::MatrixXd> v1,v2,v3;
    std::vector<std::vector<float>> v4;
    std::vector<double> v5,v6;
    ReadDataFrom("/home/sks/testdata/polarcontexts.bin",v1,20,60);
    ReadDataFrom("/home/sks/testdata/polarcontext_invkeys.bin",v2,20,1);
    ReadDataFrom("/home/sks/testdata/polarcontext_vkeys.bin",v3,1,60);
    ReadDataFrom("/home/sks/testdata/polarcontext_invkeys_mat.bin",v4,20);
    ReadDataFrom("/home/sks/testdata/locationSeqX.bin",v5);
    ReadDataFrom("/home/sks/testdata/locationSeqY.bin",v6);
    std::cout<<v1.size()<<v2.size()<<v3.size()<<v4.size()<<v5.size()<<v6.size()<<std::endl;
	return 0;
} */
