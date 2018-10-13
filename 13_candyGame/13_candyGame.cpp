#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int N=1e4+5,INF=1e9+5;
char a[N],b[N];
int main(){
    for(int i=1;i<=10;i++){
        scanf("%s%s",a,b);
        int n=strlen(a)-1,m=strlen(b)-1;
        char c=a[n],d=b[m];
        if((c=='2'||c=='3'||c=='7'||c=='8')&&(d=='2'||d=='3'||d=='7'||d=='8')) puts("Shadow");
        else puts("Matrix67");
    }
}
