#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=2e6+9;
int n,m,ans;

struct str
{
	int p;
	int a;
}s[N];

bool cmp(str x,str y)
{
	return x.p<y.p;
}

signed main()
{
	tb();
	cin>>n>>m;
	for(int i=1;i<=m;++i)
		cin>>s[i].p>>s[i].a;
	sort(s+1,s+1+m,cmp);
	for(int i=1;i<=m;++i)
	{
		if(n>s[i].a)
		{
			ans+=s[i].a*s[i].p;
			n-=s[i].a;
		}
		else
		{
			ans+=n*s[i].p;
			break;
		}
	}
	cout<<ans;
	return 0;
}
