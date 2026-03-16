#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[14],sum=0,cun=0;
	for(int i=1;i<=12;++i)
		cin>>a[i];
	for(int i=1;i<=12;++i)
	{
		sum+=300-a[i];
		while(sum>=100)
		{
			sum-=100;
			cun+=100;
		}
		if(sum<0)
		{
			cout<<"-"<<i;
			return 0;
		}
	}
	cout<<cun*1.2+sum;
	return 0;
}
