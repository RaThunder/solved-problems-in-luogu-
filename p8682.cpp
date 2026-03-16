#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n;
int a[N],d;
vector<long long> v;
long long ans;

int gcd(const int &p1,const int &p2)
{
	int x=p1,y=p2;
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
		cin>>a[i];
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	if(v[1]==v[0])
	{
		cout<<n;
		return 0;
	}
	for(auto i=1;i<=(int)v.size()-1;++i)
		d=gcd(v[i]-v[i-1],d);
	for(auto i=1;i<=(int)v.size()-1;++i)
		ans+=(v[i]-v[i-1])/d;
	cout<<ans+1;
	return 0;
}
