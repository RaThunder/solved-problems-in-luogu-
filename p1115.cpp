#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=2e5+9;
int n;
int a,dp[N];

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a;
		dp[i]=max(dp[i-1]+a,a);
	}
	sort(dp+1,dp+1+n);
	cout<<dp[n];
	return 0;
}
