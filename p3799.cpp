#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int MOD=1e9+7;
const int N=5e3+9;
int n,a,mx,mn;
long long ans;
int t[N];

long long c(int x)
{
	return x*(x-1)/2;
}

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a;
		t[a]++;
		mx=max(a,mx);
		mn=min(a,mn);
	}
	for(int i=mn;i<=mx;++i)
		for(int j=mn;j<=i/2;++j)
		{
			2*j!=i?ans+=c(t[i])*t[j]*t[i-j]:ans+=c(t[i])*c(t[j]);
			ans%=MOD;
		}
	cout<<ans;
	return 0;
}
