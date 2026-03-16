#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e3+9;
int n,m;
int a[N][N],d[N][N];

signed main()
{
	tb();
	int x1,x2,y1,y2;
	cin>>n>>m;
	while(m--)
	{
		cin>>x1>>y1>>x2>>y2;
		d[x1][y1]++;
		d[x1][y2+1]--;
		d[x2+1][y1]--;
		d[x2+1][y2+1]++;
	}
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			a[i][j]=d[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
