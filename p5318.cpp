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
int n,m;
bitset<N> vis1,vis2;
vector<int> g[N];
vector<int> v1,v2;

void dfs(int x)
{
	if(vis1[x])
		return ;
	vis1[x]=1;
	v1.push_back(x);
	for(const auto &y:g[x])
		dfs(y);
}

void bfs(int x)
{
	int a;
	queue<int> q;
	q.push(x);
	while(!q.empty())
	{
		a=q.front();
		q.pop();
		if(vis2[a])
			continue;
		vis2[a]=1;
		v2.push_back(a);
		for(const auto &y:g[a])
			q.push(y);
	}
}

signed main()
{
	tb();
	cin>>n>>m;
	int u,v;
	for(int i=1;i<=m;++i)
	{
		cin>>u>>v;
		g[u].push_back(v);
	}
	for(int i=1;i<=n;++i)
		sort(g[i].begin(),g[i].end());
	dfs(1);
	bfs(1);
	for(const auto &i:v1)
		cout<<i<<" ";
	cout<<endl;
	for(const auto &i:v2)
		cout<<i<<" ";
	return 0;
}
