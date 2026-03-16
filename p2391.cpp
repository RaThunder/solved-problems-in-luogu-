#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e6+9;
int n,m,p,q;
long long pre[N],col[N];

inline int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb;
	cin>>n>>m>>p>>q;
	for(int i=1;i<=n+1;++i)
		pre[i]=i;
	for(int i=m;i>=1;--i)
	{
		int x=min((i*p+q)%n+1,(i*q+p)%n+1),y=max((i*p+q)%n+1,(i*q+p)%n+1);
		for(int j=x;j<=y;)
		{
			if(j==root(j))
			{
				col[j]=i;
				pre[j]=root(j+1);
			}
			j=pre[j];
		}
	}
	for(int i=1;i<=n;++i)
		cout<<col[i]<<endl;
	return 0;
}
