#include <bits/stdc++.h>
using namespace std;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=3e3+9;
int n;
int we[N];
struct edge
{
	int x,y,w;
};
vector<edge> g;
int p[N];
long long ans;

int root(int x)
{
	return p[x]=(p[x]==x?x:root(p[x]));
}

int main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
		p[i]=i;
	for(int i=1;i<=n;++i)
		cin>>we[i];
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
		{
			int W;
			cin>>W;
			if(i!=j)
				g.push_back({i,j,W});
		}
	for(int i=1;i<=n;++i)
		g.push_back({i,n+1,we[i]});
	sort(g.begin(),g.end(),[](const edge &u,const edge &v)
	{
		if(u.w==v.w)
			return u.x<v.x;
		return u.w<v.w;
	});
	for(const auto &t:g)
	{
		int x=t.x,y=t.y,w=t.w;
		
		if(root(x)!=root(y))
		{
			ans+=w;
			p[root(x)]=p[root(y)];
		}
	}
	cout<<ans;
	return 0;
}
