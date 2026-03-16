#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e3+9;
int n;
struct Edge
{
	int s,a,e;
	long long sums,sum;
}p[N];
long long ans,l;

bool cmp(Edge x,Edge y)
{
	if(x.sum!=y.sum)
		return x.sum<y.sum;
	return x.sums<y.sums;
}

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>p[i].s>>p[i].a>>p[i].e;
		p[i].sums=p[i].s+p[i].a;
		p[i].sum=p[i].s+p[i].a+p[i].e;
	}
	sort(p+1,p+1+n,cmp);
	for(int i=1;i<=n;++i)
	{
		l+=p[i].sums;
		ans+=l;
		l+=p[i].e;
	}
	cout<<ans;
	return 0;
}
