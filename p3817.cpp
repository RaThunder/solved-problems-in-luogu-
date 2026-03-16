#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e5+9;
int n;
long long a[N],ans;

signed main()
{
	tb();
	long long x;
	cin>>n>>x;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	if(a[1]>x)
	{
		ans+=(a[1]-x);
		a[1]=x;
	}
	for(int i=2;i<=n;++i)
		if(a[i]+a[i-1]>x)
		{
			ans+=(a[i]-x+a[i-1]);
			a[i]=x-a[i-1];
		}
	cout<<ans;
	return 0;
}
