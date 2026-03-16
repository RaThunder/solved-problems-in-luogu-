#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf =2e18;

int a[5],d[5];

signed main()
{
	tb;
	cin>>a[1]>>a[2]>>a[3];
	if((a[1]==a[2]||a[2]==a[3]||a[1]==a[3])||((a[2]>a[1]&&a[2]<a[3])||a[2]<a[1]&&a[2]>a[3]))
		cout<<0;
	else
		cout<<min(min(abs(a[2]-a[1]),abs(a[2]-a[3])),abs(a[3]-a[1]));
	return 0;
}
