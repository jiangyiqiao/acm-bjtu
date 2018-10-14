#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
int c;
int main()
{
    scanf("%d",&c);
    for (int i=0;i<c;i++)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        if (m<n)
        {
            int t=m;
            m=n;
            n=t;
        }
        int f=1;
        while (m/n==1&&m%n)
        {
            int t=m%n;
            m=n;
            n=t;
            f=-f;
        }
        if (f==1) cout<<"Stan wins"<<endl;
        else cout<<"Ollie wins"<<endl;
    }
}

