#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e4+9;
int n,m;
int u[N*10],v[N*10];
int d[N];
long long ans;

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=m;++i)
	{
		cin>>u[i]>>v[i];
		d[u[i]]++;
		d[v[i]]++;
	}
	for(int i=1;i<=m;++i)
		if(d[u[i]]>1&&d[v[i]]>1)
			ans+=2*(d[u[i]]-1)*(d[v[i]]-1);
	cout<<ans;
	return 0;
}
