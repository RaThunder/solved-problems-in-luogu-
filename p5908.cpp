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
bitset<N> vis;
vector<int> g[N];
int n,d,ans;

void dfs(int x,int dis)
{
	if(dis>d)
		return;
	if(vis[x]==1)
		return;
	vis[x]=1;
	for(const auto &y:g[x])
		dfs(y,dis+1);
}

signed main()
{
	tb();
	int u,v;
	cin>>n>>d;
	for(int i=1;i<n;++i)
	{
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1,0);
	for(int i=1;i<=n;++i)
		if(vis[i]==1)
			ans++;
	ans--;
	cout<<ans;
	return 0;
}
