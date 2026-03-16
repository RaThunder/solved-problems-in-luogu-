#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=2e5+9;
int n,m;
struct st
{
	int a,b;
}p[N];

bool cmp(st x,st y)
{
	return x.a<y.a;
}

bool check(const int &mid)
{
	int k=m;
	for(int i=1;i<=n;++i)
	{
		if(p[i].a+p[i].b<mid||mid-p[i].a>k)
			return 1;
		if(p[i].a>mid)
			return 0;
		k-=(mid-p[i].a);
	}
	return 0;
}

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>p[i].a;
	for(int i=1;i<=n;++i)
		cin>>p[i].b;
	sort(p+1,p+1+n,cmp);
	int l=0,r=2*N,mid;
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
