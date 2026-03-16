#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n,m;
struct Edge
{
	int a,b;
	int c;
};
vector<Edge> g;
int pre[N<<1];

inline int root(int x)
{
	return pre[x]==x?x:root(pre[x]);
}

void merge(int x,int y)
{
	if(root(x)!=root(y))
		pre[root(x)]=root(y);
}

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=m;++i)
	{
		int a,b,c;
		cin>>a>>b>>c;
		g.push_back({a,b,c});
	}
	for(int i=1;i<=2*n;++i)
		pre[i]=i;
	sort(g.begin(),g.end(),[](const Edge &u,const Edge &v)
	{
		if(u.c!=v.c)
			return u.c>v.c;
		return u.a>v.a;
	});
	for(const auto &t:g)
	{
		int a=t.a,b=t.b;
		if(root(a)==root(b))
		{
			cout<<t.c;
			return 0;
		}
		merge(a+n,b);
		merge(a,b+n);
	}
	cout<<0;
	return 0;
}
