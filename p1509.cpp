#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e2+9;
int n;
int rmb[N],rp[N],t[N],p[N];
int m,r;
int dp[N];

void putin()
{
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>rmb[i]>>rp[i]>>t[i];
	cin>>m>>r;
}

signed main()
{
	tb;
	putin();
	for(int i=1;i<=n;++i)
		for(int j=r;j>=rp[i];--j)
			if(dp[j-rp[i]]+t[i]<=dp[j])
				if(p[i]+rmb[i]<=m)
				{
					p[i]+=rmb[i];
					dp[j]=dp[j-rp[i]]+t[i];
				}
	cout<<dp[r];
	return 0;
}
