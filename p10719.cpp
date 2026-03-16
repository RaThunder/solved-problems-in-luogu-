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
int n,m,k;
char a[N][N];
int p[N][N];
int ans=INT_MAX-1;

signed main()
{
	tb();
	cin>>n>>m>>k;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
		{
			cin>>a[i][j];
			p[i][j]=(int)(a[i][j]-'0')+p[i][j-1]+p[i-1][j]-p[i-1][j-1];
		}
	for(int i=1;i<=n;++i)
		for(int j=1;j<=m;++j)
			for(int t=i;t<=n;++t)
				for(int q=j;q<=m;++q)
				{
					int sum=p[t][q]-p[t][j-1]-p[i-1][q]+p[i-1][j-1];
					if(sum>=k)
						ans=min(ans,(t-i+1)*(q-j+1));
				}
	cout<<(ans==INT_MAX-1?0:ans);
	return 0;
}
