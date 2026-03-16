#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long m,n;
	int a[20]={0},t=0,b=1,c=1,d=1;
	cin>>m>>n;
	for(int i=m;i<=n;++i)
	{
		b=i;
		while(b>=1)
		{
			c=b%10;
			a[c]++;
			b=b/10;
		}
	}
	for(int i=0;i<=9;++i)
		cout<<a[i]<<" ";
	return 0;
}
