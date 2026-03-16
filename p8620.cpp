#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

string s;
int ans;

signed main()
{
	tb;
	cin>>s;
	while(prev_permutation(s.begin(),s.end()))
	ans++;
	cout<<ans;
	return 0;
}
