#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=3e2+9;
int n,m;
struct Edge
{
	int u,v,c;
};
vector<Edge> g;
int pre[N];
int s,mx;

int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb();
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		pre[i]=i;
	for(int i=1;i<=m;++i)
	{
		int u,v,c;
		cin>>u>>v>>c;
		g.push_back({u,v,c});
	}
	sort(g.begin(),g.end(),[](const Edge &x,const Edge &y)
	{
		if(x.c!=y.c)
			return x.c<y.c;
		return x.u<y.u;
	});
	for(const auto &t:g)
	{
		int u=t.u,v=t.v,c=t.c;
		if(root(u)!=root(v))
		{
			s++;
			mx=max(mx,c);
			pre[root(u)]=root(v);
		}
	}
	cout<<s<<' '<<mx;
	return 0;
}
