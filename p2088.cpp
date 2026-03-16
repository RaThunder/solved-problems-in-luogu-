#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e3+9;
int k,n;
int cnt;
int a[N];
int c[N];
bitset<N> vis;
int ans;
int p,mx,id;

signed main()
{
	tb;
	cin>>k>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=1;i<=n;++i)
	{
		if(vis[a[i]])
			continue;
		if(cnt<k)
		{
			cnt++;
			vis[a[i]]=1;
			continue;
		}
		memset(c,0,sizeof(c));
		id=0;
		p=0;
		for(int j=i+1;j<=n;j++)
			if(vis[a[j]]&&!c[a[j]])
				c[a[j]]=++id;
		for(int j=1;j<=n;j++)
		{
			if(vis[j]&&!c[j])
			{
				p=j;
				break;
			}
			else
				if(vis[j]&&c[j]==k)
					p=j;
		}
		ans++;
		vis[p]=0;
		vis[a[i]]=1;
	}
	cout<<ans;
	return 0;
}
