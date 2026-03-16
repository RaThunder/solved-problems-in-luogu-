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
struct Edge
{
	int x,y;
};
vector<Edge> g;
int pre[N],ans;

int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb();
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		cin>>m;
		if(m==0)
		{
			cout<<n-1<<endl;
			continue;
		}
		g.clear();
		ans=0;
		for(int i=1;i<=n;++i)
			pre[i]=i;
		for(int i=1;i<=m;++i)
		{
			int x,y;
			cin>>x>>y;
			g.push_back({x,y});
		}
		for(const auto &t:g)
		{
			int x=t.x,y=t.y;
			pre[root(x)]=root(y);
		}
		for(int i=1;i<=n;++i)
			if(root(i)!=root(1))
			{
				ans++;
				pre[root(i)]=root(1);
			}
		cout<<ans<<endl;
	}
	return 0;
}
