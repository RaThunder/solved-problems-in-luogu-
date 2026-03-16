#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n;
int w[N<<1];
long long ans;

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=n<<1;++i)
		cin>>w[i];
	sort(w+1,w+1+(n<<1));
	for(int i=1;i<=n;++i)
		ans+=(w[i]*(w[(n<<1)-i+1]));
	cout<<ans;
	return 0;
}
