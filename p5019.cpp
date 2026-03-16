#include<bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e5+9;
int n,ans;
int a[N],d[N];

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		d[i]=a[i]-a[i-1];
		if(d[i]>0)
			ans+=d[i];
	}
	cout<<ans;
	return 0;
}
