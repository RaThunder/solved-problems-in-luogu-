#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=5e3+9;
int a,b,s,n,ans;

struct stu
{
	int x;
	int y;
}st[N];

bool cmp(stu c1,stu c2)
{
	return c1.y<c2.y;
}

signed main()
{
	tb();
	cin>>n>>s;
	cin>>a>>b;
	a+=b;
	for(int i=1;i<=n;++i)
		cin>>st[i].x>>st[i].y;
	sort(st+1,st+1+n,cmp);
	for(int i=1;i<+n;++i)
	{
		if(st[i].x<=a&&st[i].y<=s)
		{
			ans++;
			s-=st[i].y;
		}
	}
	cout<<ans;
	return 0;
}
