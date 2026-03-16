#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e6+9;
int n,cnt;
int ans;

struct str
{
	int s;
	int e;
}p[N];

bool cmp(str a,str b)
{
	return a.e<b.e;
}

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>p[i].s>>p[i].e;
	sort(p+1,p+1+n,cmp);
	for(int i=1;i<=n;++i)
		if(p[i].s>=cnt)
		{
			cnt=p[i].e;
			ans++;
		}
	cout<<ans;
	return 0;
}
