#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e5+9;
int n,m;
int a[N];

bool check(int mid)
{
	int res=0;
	for(int i=1;i<=n;++i)
	{
		double p=1.0*(a[i]-a[i-1])/mid;
		res+=ceil(p)-1;
	}
	return res>m+1;
}

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	int l=1,r=a[n]+1,mid;
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
