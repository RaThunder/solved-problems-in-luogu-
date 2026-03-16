#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N = 5e2+9;
int a,b;
struct Edge
{
	int x,y,w;
};
vector<Edge> g;
int ans;
int pre[N];

int root(int x)
{
	return pre[x]=pre[x]==x?x:root(pre[x]);
}

void kru()
{
	for(const auto &t:g)
	{
		int x=t.x,y=t.y,w=t.w;
		if(root(x)!=root(y)&&w<a)
		{
			ans+=w;
			pre[root(x)]=root(y);
		}
	}
}

signed main()
{
	tb;
	cin>>a>>b;
	for(int i=1;i<=b;++i)
		pre[i]=i;
	for(int i=1;i<=b;++i)
		for(int j=1;j<=b;++j)
		{
			int w;
			cin>>w;
			if(i!=j&&w!=0)
				g.push_back({i,j,w});
		}
	sort(g.begin(),g.end(),[](const Edge &u,const Edge &v)
	{
		return u.w!=v.w?u.w<v.w:u.x<v.x;
	});
	kru();
	for(int i=1;i<=b;++i)
		if(root(i)!=root(1))
			ans+=a;
	cout<<ans+a;
	return 0;
}
