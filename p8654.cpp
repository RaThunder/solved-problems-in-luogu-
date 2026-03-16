#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e6+9;
int m,n,k;
int pre[N];
int ans;
int a,b;

int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb;
	cin>>m>>n;
	for(int i=1;i<=m*n;++i)
		pre[i]=i;
	cin>>k;
	while(k--)
	{
		cin>>a>>b;
		pre[root(a)]=root(b);
	}
	for(int i=1;i<=m*n;++i)
		if(pre[i]==i)
			ans++;
	cout<<ans;
	return 0;
}
