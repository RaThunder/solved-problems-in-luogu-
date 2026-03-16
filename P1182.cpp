#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e5+9,MX=1e8;
int n,a[N],m;
int l,r,mid;

bool check(int x)
{
	int sum=0,o=0;
	for(int i=1;i<=n;++i)
	{
		if(sum+a[i]<=x)
			sum+=a[i];
		else
		{
			sum=a[i];
			o++;
		}
	}
	return o>=m;
}

signed main()
{
	tb();
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		l=max(l,a[i]);
		r+=a[i];
	}
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
