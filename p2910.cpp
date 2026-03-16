#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e2+9,M=1e4+9;
int n,m;
int f[N][N],a[M];
int ans;

void floyd()
{
	for(int k=1;k<=n;++k)
		for(int i=1;i<=n;++i)
			for(int j=1;j<=n;++j)
				f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
}

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=m;++i)
		cin>>a[i];
	a[0]=1;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
		{
			int x;
			cin>>x;
			f[i][j]=x;
		}
	floyd();
	for(int i=1;i<=m;++i)
		ans+=f[a[i-1]][a[i]];
	cout<<ans;
	return 0;
}
