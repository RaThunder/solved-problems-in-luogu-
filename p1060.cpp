#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=30;
int n,m;
int v,w;
int dp[30005];

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=m;++i)
	{
		cin>>v>>w;
		for(int j=n;j>=v;--j)
			dp[j]=max(dp[j],dp[j-v]+v*w);
	}
	cout<<dp[n];
	return 0;
}
