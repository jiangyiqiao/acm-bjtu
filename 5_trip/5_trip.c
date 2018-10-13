#include<stdio.h>
int main(void)
{
	int n,a,b,i;
	int t=0;
	int head=0;
	int t1=0;
	int c[100000]={0};
	scanf("%d",&n);
	for(i=1;i<n;i++){
	    scanf("%d%d",&a,&b);
	    c[a]=b;
	    t1+=b;
	}
	for(i=1;i<=n;i++)
	    t+=i;
	head=t-t1;
	t=head;
	while(t!=0)
	{
		printf("%d\n",t);
		t=c[t];
	}
	return 0;
}
