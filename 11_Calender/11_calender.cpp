#include<iostream>
using namespace std;

typedef struct{
    int year;
    int month;
    int day;
}Date;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        Date date;
        cin>>date.year>>date.month>>date.day;
	if((date.month==9&&date.day==30)||(date.month==11&&date.day==30)||(date.month+date.day)%2==0){
	     cout<<"YES"<<endl;
        }else{
	     cout<<"NO"<<endl;
            }

    }
}
