#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n,m;
char c[N],s[N];

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>s[i];
	for(int i=1;i<=m;++i)
		cin>>c[i];
	sort(c+1,c+1+m);
	int i=1,j=1;
	while(1)
	{
		if(i==n+1&&j==m+1)
			break;
        if(i==n+1)
			cout<<c[j++];
        else if(j==m+1)
			cout<<s[i++];
        else if(s[i]<=c[j])
			cout<<s[i++];
        else
			cout<<c[j++];
	}
	return 0;
}
