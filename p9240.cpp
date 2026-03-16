#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int inf=2e18;
int n,a,b;
int ans1,ans2;

signed main()
{
	tb;
	cin>>n;
	ans2=inf;
	while(n--)
	{
		cin>>a>>b;
		ans1=max(ans1,a/(b+1)+1);
		ans2=min(ans2,a/b);
	}
	cout<<ans1<<' '<<ans2;
	return 0;
}
