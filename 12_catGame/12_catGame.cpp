#include<iostream>
using namespace std;

int main()
{
    int Ha[53001]={0},n,aa,bb,cc;
    cin>>n;
    for(int i=1;i<=n-2;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(i==1)aa=a,bb=b,cc=c;
        Ha[a]++;Ha[b]++;Ha[c]++;
    }
    if(Ha[aa]==1 || Ha[bb]==1 || Ha[cc]==1)
    {
     cout<<"JMcat Win"<<endl;
  
    }
    else if((n-2)%2==1)
    cout<<"PZ Win\n"<<endl;
    else
    cout<<"JMcat Win"<<endl;


}
