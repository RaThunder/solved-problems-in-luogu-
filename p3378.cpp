#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int a,op,n;
priority_queue<int,vector<int>,greater<int>> pq;

signed main()
{
	cin>>n;
	while(n--)
	{
		cin>>op;
		if(op==1)
		{
			cin>>a;
			pq.push(a);
		}
		else if(op==2)
			cout<<pq.top()<<endl;
		else
			pq.pop();
	}
	return 0;
}
