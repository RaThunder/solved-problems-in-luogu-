#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e2+9;
int n;
int ind[N];
vector<int> g[N],ans;

void topo()
{
	priority_queue<int,vector<int>,greater<int>> pq;
	for(int i=1;i<=n;++i)
		if(ind[i]==0)
		{
			pq.push(i);
			ans.push_back(i);
		}
	while(pq.size())
	{
		int x=pq.top();
		pq.pop();
		for(const auto &y:g[x])
			if((--ind[y])==0)
			{
				pq.push(y);
				ans.push_back(y);
			}
	}
}

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int a;
		while(cin>>a)
		{
			if(a==0)
				break;
			g[i].push_back(a);
			ind[a]++;
		}
	}
	topo();
	for(const auto &t:ans)
		cout<<t<<' ';
	return 0;
}
