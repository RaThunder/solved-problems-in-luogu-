#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n,m;
long long a[N],d[N],ans;

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		a[i]*=a[i];
	}
	sort(a+1,a+1+n);
	ans=inf;
	for(int i=m;i<=n;++i)
		ans=min(ans,a[i]-a[i-m+1]);
	cout<<ans;
	return 0;
}
