#include<bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int n;
unsigned long long k;

signed main()
{
	tb();
	cin>>n>>k;
	k^=(k>>1);
	for(int i=n-1;i>=0;--i)
		cout<<(k>>i)%2;
	return 0;
}
