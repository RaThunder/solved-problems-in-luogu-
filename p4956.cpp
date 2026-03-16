#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,k;
	cin>>n;
	for(int i=1;i<=100;++i)
		for(int j=100;j>=1;--j)
			if(52*(7*i+21*j)==n)
			{
				x=i;
				k=j;
			}
	cout<<x<<endl<<k;
	return 0;
}
