#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e3+9;
int n,l[N],w[N],u[N];
int dp[N][N];

signed main()
{
	tb();
	int x;
	cin>>n>>x;
	for(int i=1;i<=n;++i)
		cin>>l[i]>>w[i]>>u[i];
	for(int i=1;i<=n;++i)
		for(int j=0;j<=x;++j)
		{
			if(j>=u[i])
				dp[i][j]=max(dp[i-1][j]+l[i],dp[i-1][j-u[i]]+w[i]);
			else
				dp[i][j]=dp[i-1][j]+l[i];
		}
	cout<<5*dp[n][x];
	return 0;
}
