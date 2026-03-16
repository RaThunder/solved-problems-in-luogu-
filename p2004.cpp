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
int n,m,a[N][N],p[N][N],c,sum,ans1,ans2;

int getsum(int x,int y)
{
	return p[x+c-1][y+c-1]-p[x+c-1][y-1]-p[x-1][y+c-1]+p[x-1][y-1];
}

signed main()
{
	cin>>n>>m>>c;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
		{
			cin>>a[i][j];
			p[i][j]=a[i][j]+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
		}
	for(int i=1;i<=n-c+1;++i)
		for(int j=1;j<=m-c+1;++j)
			if(getsum(j,i)>sum)
			{
				sum=getsum(j,i);
				ans1=j;
				ans2=i;
			}
	cout<<ans1<<" "<<ans2;
	return 0;
}
