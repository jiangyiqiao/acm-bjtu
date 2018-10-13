#include<iostream>
#include<cmath>
using namespace std;



int factors(int n)
{
    if (n==1){return 1;}
    int count = 2;
    int sqrt_n = (int)sqrt(n);
    int r;
    for (int i=2;i<=sqrt_n;i++)
    {
	if (n%i==0)
	{
 	    if (i==sqrt_n)
	    {
		r = n/i;
                if (r==i){count++;}
                else {count += 2;}
            }else{count += 2;}
	}
    }
    return count;
}
        
int main()
{
    int K;
    cin>>K;
    int count=0;
    for (int i =1;i<2001;i++)
    {
	if (K==factors(i)){cout<<i<<endl;count++;}
    }
    if (count==0){cout<<"NO SOLUTION"<<endl;}
}
