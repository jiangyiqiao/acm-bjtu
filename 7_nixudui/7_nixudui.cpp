#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int merge(vector<int> &a,int begin,int mid,int end)
{
    int nCount = 0;
    vector<int> b;
    int j=begin,k=mid+1,n=end-begin+1;
    int i =0;
   for (i = 0; i < n ; ++i)
	{
		if (j > mid || k > end)
		{
			break;
		}
 
		if (a.at(j) <= a.at(k))
		{
			b.push_back(a.at(j));
			++j;
		}
		else
		{
			b.push_back(a.at(k));
			nCount += mid - j + 1;
			++k;
		}
	}
	while (j <= mid)
	{
		b.push_back(a.at(j));
		++j;
	}
	while (k <= end)
	{
		b.push_back(a.at(k));
		++k;
	}
	for (i = 0; i < n; ++i)
	{
		a[begin + i] = b[i];
	}
	return nCount;
}

int countReversed(vector<int> &num,int begin,int end)
{
    if (begin<end)
    {
        int mid = (begin+end)/2;
	return (countReversed(num,begin,mid)+countReversed(num,mid+1,end)+merge(num,begin,mid,end));
    }else{
	      return 0;
	}

}
int main()
{
    int n;
    cin>>n;
    int a,count;
    vector<int> vec;
    for (int i=0;i<n;i++)
    {
        cin>>a;
	vec.push_back(a);
    }
    count = countReversed(vec,0,vec.size()-1);
    cout<<count<<endl;
}
