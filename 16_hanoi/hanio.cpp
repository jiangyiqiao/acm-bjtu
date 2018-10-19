#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int a[1000];
    int n;
    while(cin>>n)
    {
        memset(a,0,sizeof(a));
        a[0]=2;
        if(n==1)
        {
            cout<<2<<endl;
            continue;
        }
        int len=1;
        n--;
        while(n--)
        {
            int x=0;
            for(int i=0;i<len;i++)
            {
                a[i]=a[i]*2+x;
                if(i==0)
                    a[i]+=2;
                x=a[i]/10;
                a[i]%=10;
            }
            a[len]+=x;
            if(a[len])
                len++;
        }

        for(int i=len-1;i>=0;i--)
            cout<<a[i];
        cout<<endl;
    }
}
