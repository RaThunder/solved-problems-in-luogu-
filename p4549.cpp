#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

int n,a;
int ans;

int gcd(int a,int b)
{
	if(a<b)
		swap(a,b);
	return b==0?a:gcd(b,a%b);
}

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a;
		ans=gcd(ans,abs(a));
	}
	cout<<ans;
	return 0;
}
