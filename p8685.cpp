#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e5+9;
int n,m,t;
struct Edge
{
	int ts,id;
}s[N];
long long ans;
int h[N];
bitset<N> vis;
int pri[N];

bool cmp(Edge x,Edge y)
{
	return x.ts<y.ts;
}

void prime(int x)
{
	if(pri[x]>5)
		vis[x]=1;
	if(pri[x]<=3)
		vis[x]=0;
}

signed main()
{
	tb;
	cin>>n>>m>>t;
	for(int i=1;i<=m;++i)
		cin>>s[i].ts>>s[i].id;
	sort(s+1,s+1+m,cmp);
	int iter=1,p=1;
	for(int i=1;i<=m;++i)
	{
		if(s[i].ts!=h[s[i].id])
		{
			int res=h[s[i].id]-s[i].ts+1;
			pri[s[i].id]+=res;
			pri[s[i].id]=(pri[s[i].id]<=0?0:pri[s[i].id]);
		}
		pri[s[i].id]+=2;
		prime(s[i].id);
		h[s[i].id]=s[i].ts;
//		for(int j=1;j<=n;++j)
//			cout<<pri[j]<<' '<<vis[j]<<"   ";
//		cout<<endl;
	}
	for(int i=1;i<=n;++i)
	{
		int res=h[i]-t;
		pri[i]+=res;
		prime(i);
	}
	for(int i=1;i<=n;++i)
		if(vis[i])
			ans++;
	cout<<ans;
	return 0;
}
