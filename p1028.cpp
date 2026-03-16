#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e3+9;
int n,a[N];

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=i/2;++j)
			a[i]+=a[j];
		a[i]++;
	}
	cout<<a[n];
	return 0;
}
