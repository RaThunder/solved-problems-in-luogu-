#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e4+9;
int n;
int a[N];
int ans;

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	while(1)
	{
		bool flag=0;
		for(int i=1;i<=n;++i)
			if(a[i]!=i)
			{
				swap(a[i],a[a[i]]);
				ans++;
				flag=1;
			}
		if(!flag)
			break;
	}
	cout<<ans;
	return 0;
}
