#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;

int num_count,num_fangan,n;
const int maxn = 1005;
int f[11][maxn][maxn];
int main(){
    cin>>n;
    num_count = (int)log2(n)+1;
    f[1][1][1] = 1;
    
    for (int i=0;i<num_count;i++)
        for (int j=i;j<=(1<<(i-1));j++)
            for (int k=i;k<=((1<<i)-1);k++)
                if(f[i][j][k])
                    for (int p=j+1;p<=k+1;p++){
                        if (p+k<=n)
                            f[i+1][p][k+p] += f[i][j][k];
                        else
                            f[i+1][p][n] += f[i][j][k];
                     }

    for (int i=1;i<=n;i++)
        num_fangan += f[num_count][i][n];

    cout<<num_count<<" "<<num_fangan<<endl;
    }
