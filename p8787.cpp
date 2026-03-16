#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=2e5+9;
int n;
long long h[N],p[N],hi;
long long ans,mx;

long long mag(const long long &H)
{
	return sqrtl(H/2+1);
}

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int cnt=0;
		cin>>hi;
		h[i]=hi;
		while(hi>1)
		{
			hi=mag(hi);
			cnt++;
		}
		p[i]=cnt;
		mx=max(mx,p[i]);
	}
	for(int i=mx;i>=1;--i)
		for(int j=1;j<=n;++j)
			if(p[j]==i)
			{
				if(h[j]!=h[j+1])
					ans++;
				p[j]--;
				h[j]=mag(h[j]);
			}
	cout<<ans;
	return 0;
}
