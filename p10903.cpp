#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=3e5+9;
int n,m,l[N],r[N];
int a,d[N],s[N];
int pl,ans;

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=m;++i)
	{
		cin>>l[i]>>r[i];
		d[l[i]]++;
		d[r[i]+1]--;
	}
	for(int i=1;i<=n;++i)
	{
		a+=d[i];
		if(a==0)
			pl++;
		if(a==1)
			s[i]=s[i-1]+1;
		else
			s[i]=s[i-1];
	}
	for(int i=1;i<=m;++i)
		cout<<pl+s[r[i]]-s[l[i]-1]<<endl;
	return 0;
}
