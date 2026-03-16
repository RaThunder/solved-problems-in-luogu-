#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e5+9;
int L,n,k,a[N];
int d[N];
int l=INT_MAX-1,r,mid;

bool check(int len)
{
	int cnt=0;
	for(int i=1;i<=n;++i)
		if(d[i]>len)
			cnt+=(d[i]-1)/len;
	return cnt>k;
}

signed main()
{
	tb();
	cin>>L>>n>>k;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		d[i]=a[i]-a[i-1];
	}
	l=1;
	r=L;
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
