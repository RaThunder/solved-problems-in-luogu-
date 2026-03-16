#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=2e3+9;
int n,m,p,q;
int pre[N];
char opt;
int ans;

int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb();
	cin>>n>>m;
	for(int i=1;i<=2*n;++i)
		pre[i]=i;
	for(int i=1;i<=m;++i)
	{
		cin>>opt>>p>>q;
		if(opt=='F')
			pre[root(p)]=root(q);
		else
		{
			pre[root(p+n)]=root(q);
			pre[root(q+n)]=root(p);
		}
	}
	for(int i=1;i<=n;++i)
		if(root(i)==i)
			ans++;
	cout<<ans;
	return 0;
}
