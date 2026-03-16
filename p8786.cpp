#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=209;
const int MOD=1e9+7;
int n,m,t;
long long dp[N][N][N];//打酒次数，看花次数，剩下的⑨
long long c;
long long ans;

signed main()
{
	tb;
	cin>>n>>m;
	dp[0][0][2]=1;
	for(int i=0;i<=n;++i)
		for(int j=0;j<=m;++j)
		{
			if(i==0&&j==0)
				continue;
			for(int k=0;k<=m+n;++k)
			{
				if(j!=0)
					dp[i][j][k]+=dp[i][j-1][k+1];
				if(k%2==0&&i!=0)
					dp[i][j][k]+=dp[i-1][j][k/2];
				dp[i][j][k]%=MOD;
			}
		}
	cout<<dp[n][m-1][1];
	return 0;
}
