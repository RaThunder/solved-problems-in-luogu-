#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=5e4+9;
int n,m,d[N],L;
int l,r,mid;

bool check(int len)
{
	int cnt=0,o=0;
	for(int i=0;i<=n;)
	{
		i++;
		if(d[i]-d[o]<len)
			cnt++;
		else
			o=i;
	}
	return cnt<=m;
}

signed main()
{
	tb();
	cin>>L>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>d[i];
	d[n+1]=L;
	l=1;
	r=d[n+1];
	while(l<=r)
	{
		mid=(l+r)/2;
		if(check(mid))
			l=mid+1;
		else
			r=mid-1;
	}
	cout<<r;
	return 0;
}
