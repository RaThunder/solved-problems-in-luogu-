//Òþ²ØµÄÇ°×ººÍ
#include <bits/stdc++.h>
using namespace std;

#define M 200005
long long a[M],n,sum[M],s;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	for(int i=1;i<n;++i)
		s=s+a[i]*(sum[n]-sum[i]);
	cout<<s;
	return 0;
}
