#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

int w,h;
int g;

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
	cin>>w>>h;
	g=gcd(w,h);
	if(g==1)
	{
		cout<<0;
		return 0;
	}
	for(int i=2;i*i<=g;++i)
		if(w%i==0&&h%i==0)
		{
			cout<<(w/i)*(h/i);
			return 0;
		}
	cout<<(w/g)*(h/g);
	return 0;
}
