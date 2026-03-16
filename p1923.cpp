#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=5e6+9;
int n,k;
int a[N];

signed main()
{
	tb();
	cin>>n>>k;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	nth_element(a+1,a+k+1,a+n+1);
	cout<<a[k+1];
	return 0;
}
