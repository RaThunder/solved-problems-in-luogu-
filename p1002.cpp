#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=30;
int n,m,u,v;
int a[N][N];
bool b[N][N];

void pd(int x,int y)
{
	b[x][y]=1;
	b[x-1][y-2]=1;
	b[x-2][y-1]=1;
	b[x+1][y-2]=1;
	b[x+2][y-1]=1;
	b[x+1][y+2]=1;
	b[x+2][y+1]=1;
	b[x-1][y+2]=1;
	b[x-2][y+1]=1;
}

signed main()
{
	tb();
	cin>>n>>m>>u>>v;
	n++;
	m++;
	u++;
	v++;
	pd(u,v);
	a[1][1]=1;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
		{
			if(!b[i][j])
				a[i][j]+=(a[i-1][j]+a[i][j-1]);
			else
				a[i][j]=0;
		}
	cout<<a[n][m];
	return 0;
}
