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
int n,ans,sumc;
int sum=N;
vector<int> g[N];
bool vis[N];

void dfs(int x,int dis)
{
	if(vis[x]==1)
		return ;
	vis[x]=1;
	sumc+=dis;
	for(const auto &y:g[x])
		dfs(y,dis+1);
}

signed main()
{
	tb();
	cin>>n;
	int u,v;
	for(int i=1;i<n;++i)
	{
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i=1;i<=n;++i)    
	{
		memset(vis,0,sizeof(vis));
		sumc=0;
		dfs(i,0);
		if(sumc<sum)
		{
			sum=sumc;
			ans=i;
		}
	}
	cout<<ans<<" "<<sum;
	return 0;
}
