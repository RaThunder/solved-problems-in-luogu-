#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=5e5+9;
int a,b,n,w;
priority_queue<int> pq;
int d,t;

signed main()
{
	tb();
	cin>>n>>a>>b;
	for(int i=1;i<=n;++i)
	{
		cin>>w;
		pq.push(w);
	}
	while(1)
	{
		if(pq.top()<=a*d)
			break;
		d++;
		t=pq.top();
		pq.pop();
		t-=b;
		pq.push(t);
	}
	cout<<d;
	return 0;
}
