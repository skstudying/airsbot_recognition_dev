# -*- coding: utf-8 -*- 

# This .py is used to read stored SC data from .bin file and display them in graphs.
import matplotlib.pyplot as plt
import numpy as np

#SC compute     
def fastAlignUsingVkey( pc1, pc2):
    argmin_shift = 0;
    min_diff_norm = 10000000; #a large  num
    for shift_idx in range(0,60):
        #pc2_shift = pc2.roll(shift_idx)
        pc2_shift  = np.roll(pc2, shift_idx) 
        diff = pc1 - pc2_shift
        diff_norm = np.linalg.norm(x=diff)
        if diff_norm < min_diff_norm:
            min_diff_norm = diff_norm
            argmin_shift = shift_idx
    return (min_diff_norm,argmin_shift)
                
                
PCfile = open("/home/sks/testdata/polarcontexts.bin")
Xfile = open("/home/sks/testdata/locationSeqX.bin")
Yfile = open("/home/sks/testdata/locationSeqY.bin")
locsX = []
locsY = []
count1,count2 = 0,0
while True:
    a = Xfile.readline()
    b = Yfile.readline()
    if  a=='' or b=='' :
        break
    locsX.append(eval(a))
    locsY.append( eval(b))
    count1 += 1
print("[ Done ] %d Location Info are loaded. "%count1)
pcsRaw = PCfile.readlines()
pcs = []
for  i in range(0,len(pcsRaw),20):
    pc = []
    for j in range(20):
        temp = list(map(eval,pcsRaw[i+j].split()))
        pc.append(temp)
     #append np.array type   
    pcs.append(np.array(pc))
    count2 += 1
print("[ Done ] %d PointCloud Info are loaded. "%count2)

#draw  multi graphs

#draw location track
ax1 = plt.subplot(5,1,1) 
plt.plot(locsY,locsX,label='AGV odom track',linewidth=2,color='r',marker='o',markerfacecolor='blue',markersize=2) 

#draw 8 hot graph with pc data 
#and the agv should go 2m btw 2 pc location.
draw_z = 5
oldX = locsX[0]
oldY = locsY[0]
ids = []
for i in range(1,min([len(locsX),len(locsY),len(pcs)]) ):
    if (locsX[i]-oldX)**2 + (locsY[i]-oldY)** 2 >= 16:
        plt.subplot(5,4,draw_z)
        plt.imshow(pcs[i],interpolation = 'nearest',cmap = 'hot' ,origin = 'up')
        plt.colorbar(shrink = .42)
        plt.title("%dth SC at x: %.2f  y: %.2f"%(i,locsX[i],locsY[i]))
        draw_z +=1
        oldX = locsX[i]
        oldY = locsY[i]
        ids.append(i)
    if draw_z>12:break
    
'''
#calculate other 7 pc `s diff score from fisrt pc
min_diffs = []
shifts = []
for  id in ids[1:]:
    prot = pcs[ids[0]]
    temp = fastAlignUsingVkey( prot,pcs[id] )
    min_diffs.append(temp[0])
    shifts.append(temp[1]*6)
#draw the diff as a line chart
ax2 = plt.subplot(5,2,7)
plt.plot(np.arange(2,9),min_diffs,label='the min diff',linewidth=2,color='green',marker='o',markerfacecolor='blue',markersize=2) 
plt.title("the min diff of other 7 point clouds`  diff from the fisrt one")

ax3 = plt.subplot(5,2,8)
plt.plot(np.arange(2,9),shifts,label='the angel shift',linewidth=2,color='yellow',marker='o',markerfacecolor='blue',markersize=2) 
plt.title("the angel shift of other 7 point clouds`  diff from the fisrt one")
'''

#calculate other all pc `s diff score from specific one
min_diffs1 = []
shifts1 = []
prot_id = 7
prot = pcs[prot_id]
markers = []
for i in range(0,min([len(locsX),len(locsY),len(pcs)]) ):
    temp = fastAlignUsingVkey( prot,pcs[i] )
    min_diffs1.append(temp[0])
    shifts1.append(temp[1]*6)
    if temp[0]<=0.6:markers.append(i)
ax4 = plt.subplot(5,2,9)
plt.plot(np.arange(0,min([len(locsX),len(locsY),len(pcs)])),shifts1,linewidth=2,color='green',marker='o',markerfacecolor='blue',markersize=2) 
plt.title("the min diff of other ALL point clouds`  diff from %d th "%prot_id)
for m in markers:
    plt.plot(m,min_diffs1[m],'r')
    plt.annotate("[%d]"%m, xy=(m,min_diffs1[m]))
ax5 = plt.subplot(5,2,10)
plt.plot(np.arange(0,min([len(locsX),len(locsY),len(pcs)])),min_diffs1,linewidth=2,color='yellow',marker='o',markerfacecolor='blue',markersize=2) 
plt.title("the angel shift of ALL point clouds`  diff from the %d th "%prot_id)

plt.show()