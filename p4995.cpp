#include<bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=3e2+9;
int h[N],n,ans;
bitset<N> b;

int f(int x)
{
	return x*x;
}

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>h[i];
	sort(h+1,h+1+n);
	for(int i=0;i<=n;++i)
	{
		if(b[n-i]==1||b[i]==1)
			break;
		ans+=f(h[n-i]-h[i]);
		b[n-i]=1;
		b[i]=1;
		if(b[i+1]==1)
			break;
		ans+=f(h[n-i]-h[i+1]);
	}
	cout<<ans;
	return 0;
}
