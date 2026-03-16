#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e2+9;
int n,a[N],b[N];
long long p,z[N];
long long l,r,mid;

bool check(int x)
{
	int pn=0;
	for(int i=1;i<=n;++i)
	{
		if(x<=z[i])
			pn+=a[i]*x;
		else
			pn+=(a[i]*z[i]+b[i]*(x-z[i]));
	}
	return pn<p;
}

signed main()
{
	tb();
	cin>>n>>p;
	for(int i=1;i<=n;++i)
		cin>>z[i]>>a[i]>>b[i];
	l=1,r=p;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(check(mid))
			l=mid+1;
		else
			r=mid-1;
	}
	cout<<l;
	return 0;
}
