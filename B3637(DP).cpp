#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=5e3+9;
int n;
int dp[N],a[N];

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		dp[i]=1;
		for(int j=1;j<=i-1;++j)
			if(a[j]<a[i])
				dp[i]=max(dp[i],dp[j]+1);
	}
	sort(dp+1,dp+1+n);
	cout<<dp[n];
	return 0;
}
