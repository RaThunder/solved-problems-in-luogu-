#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e2+9,M=5e5+9;
int n;
int a[N],Mgcd;
int ans;
bitset<M> vis;

inline int gcd(const int &x,const int &y)
{
	int z1=x,z2=y;
	if(z1<z2)
		swap(z1,z2);
	return z2==0?z1:gcd(z2,z1%z2);
}

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		Mgcd=gcd(a[i],Mgcd);
	}
	if(Mgcd>1)
	{
		cout<<"INF";
		return 0;
	}
	//sort(a+1,a+1+n);
	vis[0]=1;
	for(int i=1;i<=n;++i)
		for(int j=a[i];j<=M;++j)
			vis[j]=vis[j]|vis[j-a[i]];
	for(int i=1;i<=M;++i)
		if(!vis[i])
			ans++;
	cout<<ans;
	return 0;
}
