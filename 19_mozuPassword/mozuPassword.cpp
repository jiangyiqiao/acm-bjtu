#include<algorithm>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<cstdio>
#include<cmath>
#include<queue>
using namespace std;
inline const int Get_Int() {
    int num=0,bj=1;
    char x=getchar();
    while(x<'0'||x>'9') {
        if(x=='-')bj=-1;
        x=getchar();
    }
    while(x>='0'&&x<='9') {
        num=num*10+x-'0';
        x=getchar();
    }
    return num*bj;
}
int n,ans=0;
string s[2005];
int main() {
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1; i<=n; i++)cin>>s[i];
    for(int i=1; i<=n; i++) {
        int sum=0;
        for(int j=1; j<=i; j++)
            if(s[i].find(s[j])==0)sum++;
        ans=max(ans,sum);
    }
    printf("%d\n",ans);
    return 0;
}
