#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

string s;
int n,k;

signed main()
{
	tb();
	cin>>s;
	cin>>k;
	while(k)
	{
		int cnt=0;
		for(int i=0;s[i]<=s[i+1];++i)
			cnt++;
		s.erase(cnt,1);
		k--;
	}
	while(s[0]=='0'&&s.length()>1)
		s.erase(0,1);
	cout<<s;
	return 0;
}
