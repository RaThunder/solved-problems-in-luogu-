#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	iod::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e5+9;
int n,k,t,a[N];
int l,r,mid;
int v[N],cnt;

bool check(int x)
{
	
}

signed main()
{
	tb();
	cin>>n>>k>>t;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	l=1,r=n;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(check(mid))
			l=mid+1;
		else
			r=mid-1;
	}
	cout<<l<<' '<<r;
	return 0;
}
