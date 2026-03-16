#include <bits/stdc++.h>
using namespace std;
#define int long long

inline int read()
{
	int x=0,f=1;
	char ch=getchar();
	while(!isdigit(ch))
	{
		if(ch='-')
			f=-1;
		ch=getchar();
	}
	while(isdigit(ch))
	{
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	return x*f;
}

inline void write(int x)
{
	if(x<0)
	{
		putchar('-');
		x=-x;
	}
	if(x>9)
		write(x/10);
	putchar(x%10+'0');
}

long long inf=INT_MAX;
const int N=1e4+9;
int n,m,s;
int ui,vi,wi;
int d[N];
bitset<N> vis;
struct Edge
{
	int x,w;
	bool operator<(const Edge &u)const
	{
		return w==u.w?x>u.x:w>u.w;
	}
};
priority_queue<Edge> pq;
vector<Edge> g[N];

void dij(int k)
{
	for(int i=1;i<=n;++i)
		d[i]=inf;
	d[k]=0;
	pq.push({k,d[k]});
	while(!pq.empty())
	{
		int b=pq.top().x;
		pq.pop();
		if(vis[b])
			continue;
		vis[b]=1;
		for(const auto &v:g[b])
		{
			int xi=v.x,wi=v.w;
			if(d[b]+wi<d[xi])
			{
				d[xi]=d[b]+wi;
				pq.push({xi,d[xi]});
			}
		}
	}
}

signed main()
{
	n=read(),m=read(),s=read();
	//cin>>n>>m>>s;
	for(int i=1;i<=m;++i)
	{
		ui=read(),vi=read(),wi=read();
		//cin>>ui>>vi>>wi;
		g[ui].push_back({vi,wi});
	}
	dij(s);
	for(int i=1;i<=n;++i)
	{
		write(min(d[i],inf));
		printf(" ");
	}
	return 0;
}
