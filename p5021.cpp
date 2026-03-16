#include <bits/stdc++.h>
using namespace std;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=5e4+9;
int n,m;
struct edge
{
	int y;
	int w;
};
vector<edge> g[N];
int mx;
int res;
long long lz[N];

inline void dfs(int x,int fa,int mid)
{
	multiset<long long> s;
	for(const auto &t:g[x])
	{
		int y=t.y,w=t.w;
		if(y!=fa)
		{
			dfs(y,x,mid);
			if(lz[y]+w>=mid)
				res++;
			else
				s.insert(lz[y]+w);
		}
	}
	lz[x]=0;
	while(!s.empty())
	{
		//切记非连续存储内存要用p--而非p-1
		long long val=*s.begin();
		s.erase(s.begin());
		auto p=s.lower_bound(mid-val);
		if(p!=s.end())
		{
			res++;
			s.erase(p);
		}
		else
			lz[x]=max(lz[x],val);
	}
}

inline bool check(int mid)
{
	res=0;
	for(int i=1;i<=n;++i)
		lz[i]=0;
	dfs(1,0,mid);
	return res>=m;
}

int main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<n;++i)
	{
		int x,y,w;
		cin>>x>>y>>w;
		g[x].push_back({y,w});
		g[y].push_back({x,w});
		mx+=w;
	}
	int l=0,r=mx;
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(check(mid))
			l=mid+1;
		else
			r=mid-1;
	}
	cout<<r;
	return 0;
}