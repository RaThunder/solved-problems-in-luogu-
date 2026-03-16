#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e8+9;
int t,n;
int p;
bitset<N> b;
vector<int> zhi;
int ans,cnt;

void ou()
{
	b[0]=1;
	b[1]=1;
	for(int i=2;i<=N;++i)
	{
		if(b[i]==0)
			zhi.push_back(i);
		for(const auto &t:zhi)
		{
			if(i*t>N)
				break;
			b[i*t]=1;
			if(i%t)
				break;
		}
	}
}

signed main()
{
	tb;
	ou();
	for(cin>>t;t>=1;--t)
	{
		ans=0,cnt=0;
		cin>>n;
		if(b[n]==0)
		{
			cout<<n;
			continue;
		}
		while(n>1)
		{
			if(n%zhi[cnt]==0)
			{
				n/=zhi[cnt];
				ans^=zhi[cnt];
			}
			else
				cnt++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
