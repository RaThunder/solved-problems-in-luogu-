#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int p=1054*1054+185*185;
const int N=1e6+9;
int n,q;
long long a,mx,pre[N];
int l,r;
long long ans;
long long inv[p+9];

void getinv()
{
	inv[0]=1;
	inv[1]=1;
	for(int i=2;i<=p;++i)
		inv[i]=(p-p/i)*inv[p%i]%p;
}

signed main()
{
	tb;
	cin>>n>>q;
	pre[0]=1;
	for(int i=1;i<=n;++i)
	{
		cin>>a;
		pre[i]=pre[i-1]*a%p;
	}
	getinv();
	while(q--)
	{
		cin>>l>>r;
		ans^=pre[r]*inv[pre[l-1]]%p;
	}
	cout<<ans;
	return 0;
}
