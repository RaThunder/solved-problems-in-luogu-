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
int n;
struct Edge
{
	int x,y,w;
};
vector<Edge> g;
int pre[N];
int ans;

int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
		pre[i]=i;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
		{
			int w;
			cin>>w;
			if(i!=j)
				g.push_back({i,j,w});
		}
	sort(g.begin(),g.end(),[](const Edge &u,const Edge &v)
	{
		if(u.w!=v.w)
			return u.w<v.w;
		return u.x<v.x;
	});
	for(const auto &t:g)
	{
		int x=t.x,y=t.y,w=t.w;
		if(root(x)!=root(y))
		{
			ans+=w;
			pre[root(x)]=root(y);
		}
	}
	cout<<ans;
	return 0;
}
