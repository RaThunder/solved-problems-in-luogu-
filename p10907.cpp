#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

map<pair<int,int>,long long> mp;
int n;
long long ans;

long long gcd(int x,int y)
{
	if(x<y)
		swap(x,y);
	return y==0?x:gcd(y,x%y);
}

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		long long k=gcd(abs(x2-x1),abs(y2-y1));
		long long dx=(x2-x1)/k,dy=(y2-y1)/k;
		for(int j=0;j<=k;++j)
			mp[{x1+dx*j,y1+dy*j}]++;
	}
	for(const auto &t:mp)
		if(t.second>=2)
			ans++;
	cout<<ans;
	return 0;
}
