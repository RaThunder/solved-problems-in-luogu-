#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int MOD=1e9+7;
const int N=55;
int n,m,k;
int w[N][N];
long long ans;

void dfs(int x,int y,int mx,int sum)
{
	if(x==n+1||y==m+1)
		return ;
	if(x==n&&y==m)
	{
		if(sum==k||(sum==k-1&&w[x][y]>mx))
			ans++;
		ans%=MOD;
		return ;
	}
	if(w[x][y]>mx)
	{
		dfs(x,y+1,w[x][y],sum+1);
		dfs(x+1,y,w[x][y],sum+1);
	}
	dfs(x,y+1,mx,sum);
	dfs(x+1,y,mx,sum);
}

signed main()
{
	tb;
	cin>>n>>m>>k;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
			cin>>w[i][j];
	dfs(1,1,-1,0);
	cout<<ans;
	return 0;
}
