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
int n,m;
int d[N],s[N],t[N];
int r[N];
int di[N];
bool pd;
int le,ri,mid;
int tow;

bool check(int x)
{
	tow=0;
	memset(di,0,sizeof(di));
	for(int i=1;i<=n;++i)
		di[i]=r[i]-r[i-1];
	for(int i=1;i<=x;++i)
	{
		di[s[i]]-=d[i];
		di[t[i]+1]+=d[i];
	}
	for(int i=1;i<=n;++i)
	{
		tow+=di[i];
		if(tow<0)
			return 0;
	}
	return 1;
}

signed main()
{
	tb();
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>r[i];
	for(int i=1;i<=m;++i)
		cin>>d[i]>>s[i]>>t[i];
	le=1,ri=m;
	if(check(m))
		pd=1;
	else
		while(le<=ri)
		{
			mid=(le+ri)/2;
			if(mid==0)
				break;
			if(check(mid))
				le=mid+1;
			else
				ri=mid-1;
		}
	if(pd==1)
		cout<<0;
	else
		cout<<-1<<endl<<le;
	return 0;
}
