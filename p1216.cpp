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
int r,dp[N][N],ans;

signed main()
{
	tb();
	cin>>r;
	for(int i=1;i<=r;++i)
		for(int j=1;j<=i;++j)
			cin>>dp[i][j];
	for(int i=1;i<=r;++i)
		for(int j=1;j<=i;++j)
			dp[i][j]+=max(dp[i-1][j-1],dp[i-1][j]);
	for(int i=1;i<=r;++i)
		if(dp[r][i]>ans)
			ans=dp[r][i];
	cout<<ans;
	return 0;
}
