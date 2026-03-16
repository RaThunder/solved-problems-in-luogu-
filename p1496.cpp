#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=2e4+9;
long long l[N],r[N],n,ans,a;

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>l[i]>>r[i];
	sort(l+1,l+1+n);
	sort(r+1,r+1+n);
	for(int i=1;i<=n;++i)
	{
		ans+=(r[i]-l[i]);
		a=r[i-1]-l[i];
		if(i>=2)
			ans-=(a>0?a:0);
	}
	cout<<ans;
	return 0;
}
