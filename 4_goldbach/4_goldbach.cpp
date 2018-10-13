#include <iostream>
#include <cmath>
using namespace std;
int is_prime(int n){
    int flag=1;
    if (n<2){flag=0;return flag;}
    if (n==2){flag=1; return flag;}
    for (int i=2;i<n;i++)
    {
        if (n%i==0){
            flag=0; 
            break;
        }
    }     
    return flag; 
}

int main(){
    int n;
    cin>>n;
    for (int i=1;i<n;i++)
    {
        if (is_prime(i)&&is_prime(n-i)){
            cout<<i<<" "<<n-i<<endl;
            break;
           }
    }
    }
