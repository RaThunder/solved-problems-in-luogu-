#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=2e5+9;
int n,c,ans;
int a[N];
map<int,int> mp;

signed main()
{
	tb();
	cin>>n>>c;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	sort(a+1,a+1+n);
	for(int i=n,k=n;i>=2;--i)
	{
		while(a[i]-a[k-1]<=c&&k>1)
			k--;
		if(a[i]-a[k]==c)
			ans+=mp[a[k]];
	}
	cout<<ans;
	return 0;
}
