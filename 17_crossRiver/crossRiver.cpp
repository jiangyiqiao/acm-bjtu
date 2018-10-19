#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 105
#define MAX 10001
using namespace std;
int len,s,t,m,ans,tot;
int a[N],v[MAX],f[MAX];
int main()
{
	scanf("%d%d%d%d",&len,&s,&t,&m);
	for(int i=1;i<=m;i++)
	  cin>>a[i];
	if(s==t)
	{
	  for(int i=1;i<=m;i++)
	    if(a[i]%s==0)
	      ans++;
	  printf("%d\n",ans);
	  return 0;
	}
	sort(a+1,a+1+m);
	v[tot=a[1]%90]=1;
	for(int i=2;i<=m;i++)
	  v[tot+=(a[i]-a[i-1])%90]=1;
	for(int i=tot;i>=0;i--)
	{
		f[i]=100;
		for(int j=s;j<=t;j++)
		  f[i]=min(f[i],f[i+j]+v[i]);
	}
	printf("%d\n",f[0]);
	return 0;
}

