#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=3e2+9;
int dp[N][N];
int n;
int m[N];

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>m[i];
		m[i]+=m[i-1];
	}
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			dp[i][j]=(i==j?0:inf);
	for(int len=1;len<=n;++len)
		for(int l=1;l+len-1<=n;++l)
		{
			int r=l+len-1;
			for(int k=l;k<r;++k)
				dp[l][r]=min(dp[l][r],dp[l][k]+dp[k+1][r]+(m[r]-m[l-1]));
		}
	cout<<dp[1][n];
	return 0;
}
