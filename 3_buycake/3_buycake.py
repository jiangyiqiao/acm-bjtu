import string
import math

n = int(input())

num_count = int(math.log(n,2)+1)
f=[]
for i in range(11):
    f.append([])
    for j in range(1005):
        f[i].append([])
        for k in range(1005):
            f[i][j].append(0)
f[1][1][1] = 1
for i in range(1,num_count):
    for j in range(i,(i<<(i-1))+1):
        for k in range(i,(1<<i)):
            if(f[i][j][k]):
                for p in range(j+1,k+2):
                    if p+k<=n:
                        f[i+1][p][k+p] += f[i][j][k]
                    else:
                        f[i+1][p][n] += f[i][j][k]

num_fangan = 0
for i in range(1,n+1):
    num_fangan += f[num_count][i][n]

print(str(num_count)+' '+str(num_fangan))
