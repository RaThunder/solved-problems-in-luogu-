#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e3+9;
long long dp[N][N][2];
int n,m;
int a[N],f[N];
long long ans;

inline int fot(const int &i)
{
	int x=i;
	int res=0;
	while(x)
	{
		int p=x&1;
		res=(res<<1)|(p&1);
		x>>=1;
	}
	return res;
}

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		f[i]=fot(a[i]);
		dp[i][0][0]=dp[i-1][0][0]+a[i];
	}
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
		{
			dp[i][j][0]=max(dp[i-1][j][0],dp[i-1][j][1])+a[i];
			dp[i][j][1]=max(dp[i-1][j][1],dp[i-1][j-1][0])+f[i];
		}
	for(int j=0;j<=m;++j)
		ans=max(ans,max(dp[n][j][0],dp[n][j][1]));
	cout<<ans;
	return 0;
}
