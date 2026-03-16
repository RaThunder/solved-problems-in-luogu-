#include <bits/stdc++.h>
using namespace std;
#define int long long

int ans,a,n;

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

signed main()
{
	tb();
	cin>>n;
	while(n--)
	{
		cin>>a;
		ans^=a;
	}
	cout<<ans;
	return 0;
}
