#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const long long MOD=1000000007;
const int N=1e5+9;
int n;
int deg[N];
long long ans;
long long star[N];
long long jc[N],invjc[N];
int l,r;

long long qmi(int a,int q)
{
	long long res=1;
	while(q)
	{
		if(q&1==1)
			res*=a;
		a*=a;
		res%=MOD;
		a%=MOD;
		q>>=1;
	}
	return res;
}

inline long long inv(const long long &x)
{
	return qmi(x,MOD-2);
}

void init()
{
	jc[0]=1;
	invjc[0]=1;
	for(int i=1;i<=n;++i)
	{
		jc[i]=jc[i-1]*i%MOD;
		invjc[i]=inv(jc[i]);
	}
}

inline long long c(const int &k,const int &m)
{
	if(m<k||k<0||m<0)
		return 0;
	return jc[m]*invjc[m-k]%MOD*invjc[k]%MOD;
}

bitset<N> vis;
long long cur[N];

int getans(int x)
{
	if(!vis[x])
	{
		vis[x]=1;
		for(int i=l-1;i<=r-1;++i)
			cur[x]=(cur[x]+c(i,x))%MOD;
	}
	return cur[x];
}

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n-1;++i)
	{
		int x,y;
		cin>>x>>y;
		deg[x]++;
		deg[y]++;
	}
	cin>>l>>r;
	init();
	for(int i=1;i<=n;++i)
		ans=(ans+getans(deg[i]))%MOD;
	cout<<ans;
	return 0;
}
