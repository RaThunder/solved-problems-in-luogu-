#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e5+9;
int n,k;
int h[N],w[N];
int mx;

bool check(int mid)
{
	int p=0;
	for(int i=1;i<=n;++i)
		p+=(h[i]/mid)*(w[i]/mid);
	return p<k;
}

signed main()
{
	tb;
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	{
		cin>>h[i]>>w[i];
		mx=max(mx,max(h[i],w[i])+1);
	}
	int l=0,r=mx,mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(check(mid))
			r=mid-1;
		else
			l=mid+1;
	}
	cout<<r;
	return 0;
}
