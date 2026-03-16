#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n,m;
int p[N],ans;

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=m;++i)
		cin>>p[i];
	sort(p+1,p+1+m);
	for(int i=1;i<=n;++i)
	{
		ans=max(abs(p[1]-i),abs(p[m]-i));
		cout<<ans<<' ';
	}
	return 0;
}
