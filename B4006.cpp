#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int t=1e3+9;
int n,a[t],k,ans,p[t];

signed main()
{
	tb();
	cin>>n>>k;
	for(int i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;++i)
		p[i]=p[i-1]+a[i];
	for(int i=1,j=0;i<n;++i)
	{
		while(a[j+1]-a[i]<=k&&j<n-1)
			j++;
		ans=max(ans,p[j]-p[i-1]);
	}
	cout<<ans;
	return 0;
}
