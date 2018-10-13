#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main()
{
    const double PI=3.14159265;
    int n;
    double r,x[1005],y[1005];
    cin>>n>>r>>x[0]>>y[0];
    double sum=PI*r*2;
    for(int i=1;i<n;i++){
        cin>>x[i]>>y[i];
        sum+=sqrt((x[i]-x[i-1])*(x[i]-x[i-1])+(y[i]-y[i-1])*(y[i]-y[i-1]));
        if(i==n-1)
            sum+=sqrt((x[i]-x[0])*(x[i]-x[0])+(y[i]-y[0])*(y[i]-y[0]));
    }
    cout<<setprecision(2)<<fixed<<sum;
    return 0;
}

