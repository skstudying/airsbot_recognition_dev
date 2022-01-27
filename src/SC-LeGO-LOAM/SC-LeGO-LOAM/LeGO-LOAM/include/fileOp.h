#ifndef FILEOP_H
#define FILEOP_H
#include <string>
#include <string.h>
#include <iostream>
#include<unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <vector>
#include <Eigen/Dense>
#include <fstream>
//Recursively delete all the file in the directory.
int rm_dir(std::string dir_full_path) ;
//Remove files or dirs
bool Remove(std::string file_name) ;
//
std::vector<float> eig2stdvec1( Eigen::MatrixXd _eigmat );

int ReadData(std::istream &fin, Eigen::MatrixXd &m_matrix);

void ReadDataFrom(std::string _filepath, std::vector<Eigen::MatrixXd>  &_goalvector, int numRow, int numCol);

void ReadDataFrom(std::string _filepath, std::vector<std::vector<float> >  &_goalvector, int numCol);

void ReadDataFrom(std::string _filepath, std::vector<double>  &_goalvector);

#endif
