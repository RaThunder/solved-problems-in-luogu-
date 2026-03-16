#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

const int N=5e5+9;
int n,m,s;
vector<int> g[N];
int dep[N];
int fa[N][21];

void dfs(int x,int f)
{
	dep[x]=dep[f]+1;
	fa[x][0]=f;
	for(int i=1;i<=20;++i)
		fa[x][i]=fa[fa[x][i-1]][i-1];
	for(const auto &y:g[x])
		if(y!=f)
			dfs(y,x);
}

int lca(int u,int v)
{
	if(dep[u]<dep[v])
		swap(u,v);
	for(int i=20;i>=0;--i)
		if(dep[fa[u][i]]>=dep[v])
			u=fa[u][i];
	if(u==v)
		return u;
	for(int i=20;i>=0;--i)
		if(fa[u][i]!=fa[v][i])
		{
			u=fa[u][i];
			v=fa[v][i];
		}
	return fa[u][0];
}

signed main()
{
	tb;
	cin>>n>>m>>s;
	for(int i=1;i<=n-1;++i)
	{
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(s,0);
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		cout<<lca(a,b)<<endl;
	}
	return 0;
}
