#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e6;
int n;
int h[N];
int dp[N];

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>h[i];
	for(int i=1;i<=n+1;++i)
	{
		dp[i]=dp[i-1]+h[i];
    	if(i-2>=0)
			dp[i]=min(dp[i],dp[i-2]+h[i]);
    	if(i-3>=0)
			dp[i]=min(dp[i],dp[i-3]+h[i]);
	}
	cout<<dp[n+1];
	return 0;
}
