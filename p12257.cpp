#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n,a[N];
long long ans;
bitset<N> vis;

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	sort(a+1,a+1+n);
	if(a[n]<(a[1]<<1)||n==1)
	{
		cout<<0;
		return 0;
	}
	int l=n>>1,r=n;
	while(l)
	{
		if((a[l]<<1)>a[r])
			l--;
		else
		{
			vis[l--]=1;
			vis[r--]=1;
			ans++;
			while(r>=l&&vis[r])
				r--;
		}
	}
	cout<<ans;
	return 0;
}
