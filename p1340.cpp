#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=2e2+9;
int n,m;
struct Edge
{
	int x,y,w,p;
};
vector<Edge> g;
int pre[N];

int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

void kru(int p)
{
	
}

signed main()
{
	tb();
	cin>>n>>m;
	for(int i=1;i<=m;++i)
	{
		int x,y,w;
		cin>>x>>y>>w;
		g.push_back({x,y,w,i});
	}
	sort(g.begin(),g.end(),[](const Edge &u,const Edge &v)
	{
		if(u.w!=v.w)
			return u.w<v.w;
		return u.x<v.x;
	});
	for(int i=1;i<=m;++i)//mdÖ±½Ó±©Á¦
	{
		int ans=0;
		bool pd=0;
		for(int j=1;j<=n;++j)
			pre[j]=j;
		for(const auto &t:g)
		{
			int x=t.x,y=t.y,w=t.w,p=t.p;
			if(root(x)!=root(y)&&p<=i)
			{
				pre[root(x)]=root(y);
				ans+=w;
			}
		}
		for(int j=1;j<=n;++j)
			if(root(j)!=root(1))
			{
				pd=1;
				break;
			}
		cout<<(pd==0?ans:-1)<<endl;
	}
	return 0;
}
