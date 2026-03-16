#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e2+9;
int n,m;
int d[N][N];
const int inf=INT_MAX-1;

void floyd(int x)
{
	for(int k=1;k<=x;++k)
		for(int i=1;i<=x;++i)
			for(int j=1;j<=x;++j)
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
	for(int i=1;i<=x;++i)
	{
		for(int j=1;j<=x;++j)
			cout<<d[i][j]<<" ";
		cout<<endl;
	}
}

signed main()
{
	int u,v,w;
	tb();
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			d[i][j]=inf;
	for(int i=1;i<=n;++i)
		d[i][i]=0;
	for(int i=1;i<=m;++i)
	{
		cin>>u>>v>>w;
		d[u][v]=min(d[u][v],w);
		d[v][u]=min(d[v][u],w);
	}
	floyd(n);
	return 0;
}
