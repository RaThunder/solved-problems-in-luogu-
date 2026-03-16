#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=2e6+9;
int n,k;
int a[N];
deque<int> dq;

signed main()
{
	tb();
	cin>>n>>k;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=1;i<=n;++i)
	{
		while(!dq.empty()&&dq.front()<i-k+1)
			dq.pop_front();
		while(!dq.empty()&&a[dq.back()]<=a[i])
			dq.pop_back();
		dq.push_back(i);
		if(i>=k)
			cout<<a[dq.front()]<<endl;
	}
	return 0;
}
