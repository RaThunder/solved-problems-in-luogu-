#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e3+9;
int n,p,k;
struct Edge
{
	int y,w;
};
vector<Edge> g[N];
deque<int> dq;
int d[N];
bool vis[N];

bool check(int mid)
{
	dq.clear();
	for(int i=1;i<=n;++i)
	{
		d[i]=inf;
		vis[i]=0;
	}
	d[1]=0;
	dq.push_back(1);
	while(!dq.empty())
	{
		int x=dq.front();
		dq.pop_front();
		if(vis[x])
			continue;
		vis[x]=1;
		for(const auto &t:g[x])
		{
			int y=t.y,w=(t.w<mid?0:1);
			if(d[x]+w<d[y])
			{
				d[y]=d[x]+w;
				if(w==0)
					dq.push_front(y);
				else
					dq.push_back(y);
			}
		}
	}
	return d[n]>k;
}

signed main()
{
	tb;
	cin>>n>>p>>k;
	for(int i=1;i<=p;++i)
	{
		int x,y,w;
		cin>>x>>y>>w;
		g[x].push_back({y,w});
		g[y].push_back({x,w});
	}
	int l=0,r=1000000;
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(check(mid))
			l=mid+1;
		else
			r=mid-1;
	}
	if(l>=1000000)
		cout<<-1;
	else
		cout<<r;
	return 0;
}
