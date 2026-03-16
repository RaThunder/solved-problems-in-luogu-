#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e2+9;

struct s
{
	double w,m;
}st[N];

int n,t,sum,v;
double ans;

bool cmp(s x,s y)
{
	return x.w>y.w;
}

signed main()
{
	tb();
	cin>>n>>t;
	for(int i=1;i<=n;++i)
	{
		cin>>st[i].m>>v;
		st[i].w=(v/st[i].m*1.0);
	}
	sort(st+1,st+1+n,cmp);
	for(int i=1;i<=n;++i)
	{
		while(st[i].m--)
		{
			t--;
			if(t<0)
				break;
			ans+=st[i].w;
		}
		if(t<0)
			break;
	}
	printf("%.2lf",ans);
	return 0;
}
