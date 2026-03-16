#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e6+9;
int n,l,r,ans;
vector<int> g[N];
bitset<N> vis;

void dfs(int k,int dep)
{
	if(vis[k])
		return ;
	vis[k]=1;
	for(const auto &x:g[k])
		dfs(x,dep+1);
	ans=max(dep,ans);
}

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>l>>r;
		if(l!=0)
			g[i].push_back(l);
		if(r!=0)
			g[i].push_back(r);
	}
	dfs(1,1);
	cout<<ans;
	return 0;
}
