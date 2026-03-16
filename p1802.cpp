//01±³°ü 
#include <bits/stdc++.h>
using namespace std;

#define N 1000000
long long a[N],lo[N],wi[N],us[N];
long long n,x;

int main()
{
	a[0]=0;
	cin>>n>>x;
	for(int i=1;i<=n;++i)
		cin>>lo[i]>>wi[i]>>us[i];
	for(long long i=1;i<=n;++i)
		for(long long j=x;j>=us[i];--j)
			a[j]=max(a[j]+lo[i],a[j-us[i]]+wi[i]);
	
	cout<<5*a[x];
	return 0;
}
