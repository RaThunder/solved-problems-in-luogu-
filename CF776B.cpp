#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n;
int a[N];
vector<int> pr;
bitset<N> vis;

void getprime()
{
	vis[0]=1;
	vis[1]=1;
	for(int i=2;i<=n+1;++i)
	{
		if(!vis[i])
			pr.push_back(i);
		for(int j=0;j<pr.size()&&i*pr[j]<=n+1;++j)
		{
			vis[i*pr[j]]=1;
			if(i%pr[j]==0)
				break;
		}
	}
}

signed main()
{
	tb;
	cin>>n;
	getprime();
	if(n<=2)
	{
		cout<<1<<endl;
		for(int i=1;i<=n;++i)
			cout<<1<<' ';
		return 0;
	}
	cout<<2<<endl;
	for(int i=1;i<=n;++i)
	{
		if(!vis[i+1])
			cout<<1<<' ';
		else
			cout<<2<<' ';
	}
	return 0;
		
}
