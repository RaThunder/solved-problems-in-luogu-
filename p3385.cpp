#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int N=2e3+9;
const ll inf=2e18;

struct Edge
{
	ll y,w;
};
vector<Edge> ed[N];
int n,m,t;
ll d[N];

bool bf(int x)
{
	for(int i=1;i<=n;++i)
		d[i]=inf;
	d[x]=0;
	queue<ll> q;
	bitset<N> inq;
	vector<int> cnt(n+1);
	q.push(x);
	while(q.size())
	{
		int a=q.front();
		q.pop();
		inq[a]=0;
		cnt[a]++;
		if(cnt[a]>=n)
			return 0;
		for(const auto &t:ed[a])
		{
			ll y=t.y,w=t.w;
			if(d[y]>d[a]+w)
			{
				d[y]=d[a]+w;
				if(!inq[y])
					q.push(y),inq[y]=1;
			}
		}
	}
	return 1;
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=1;i<=n;++i)
			ed[i].clear();
		for(int i=1;i<=m;++i)
		{
			ll c1,c2,w;
			cin>>c1>>c2>>w;
			if(w>=0)
			{
				ed[c1].push_back({c2,w});
				ed[c2].push_back({c1,w});
			}
			else
				ed[c1].push_back({c2,w});
		}
		if(bf(1))
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
