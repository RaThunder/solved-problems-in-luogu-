#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

long long f[90],n;
int t;
long long p[100]; 

long long dfs(const long long &u,int x)
{
	if(x<=1)
		return 0;
	if(u==1)
		return 1;
	while(u<f[x])
		x--;
	long long ans=0;
	if(u%f[x]==0)
		ans+=dfs(u/f[x],x);
	return ans+dfs(u,x-1);
}

signed main()
{
	tb;
	for(int j=1;j<=500;++j)
	{
		cin>>t;
		f[0]=1;
		f[1]=1;
		for(int i=2;i<=86;++i)
			f[i]=f[i-1]+f[i-2];
		for(int i=1;i<=t;++i)
		{
			cin>>n;
			p[i]=dfs(n,86);
		}
		for(int i=1;i<=t;++i)
			cout<<p[i]<<endl;
	}
	
	return 0;
}
