#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e4+9;
int n,a;
long long c1,c2,sum;
priority_queue<long long,vector<long long>,greater<long long>> pq;

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a;
		pq.push(a);
	}
	while(1)
	{
		c1=pq.top();
		pq.pop();
		c2=pq.top();
		pq.pop();
		sum+=(c1+c2);
		if(pq.empty())
			break;
		pq.push(c1+c2);
	}
	cout<<sum;
	return 0;
}
