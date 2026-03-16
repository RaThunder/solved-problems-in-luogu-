#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e4+9;
int n,m,s,t;
struct Edge
{
	int u,v,w;
};
vector<Edge> g;
int pre[N],ans;

int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb();
	cin>>n>>m>>s>>t;
	for(int i=1;i<=n;++i)
		pre[i]=i;
	for(int i=1;i<=m;++i)
	{
		int u,w,v;
		cin>>u>>v>>w;
		g.push_back({u,v,w});
	}
	sort(g.begin(),g.end(),[](const Edge &x,const Edge &y)
	{
		if(x.w!=y.w)
			return x.w<y.w;
		return x.u<y.u;
	});
	for(const auto &o:g)
	{
		int u=o.u,v=o.v,w=o.w;
		if(root(u)!=root(v))
		{
			ans=max(ans,w);
			pre[root(u)]=root(v);
		}
		if(root(s)==root(t))
		{
			cout<<ans;
			break;
		}
	}
	return 0;
}
