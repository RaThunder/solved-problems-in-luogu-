#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e3+9;
int n,m;
vector<int> g[N];
long long ans;
bitset<N> vis;
long long l[N];

inline void dfs(const int &u,const int &v)//换根，把u换成根
{
	if(u==v)
	{
		for(int i=1;i<=n;++i)
			if(vis[i])
				l[i]++;
		return ;
	}
	if(vis[u])
		return ;
	vis[u]=1;
	for(const auto &x:g[u])
	{
		dfs(x,v);
		vis[u]=0;
	}
}

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=m;++i)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int u,v;
	cin>>u>>v;
	dfs(u,v);
	for(int i=1;i<=n;++i)
		ans+=l[i];
	if(ans==0)
		ans=-1;
	cout<<ans;
	return 0;
}
