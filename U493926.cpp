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
int len,lj;

void solve()
{
	bool pd;
	for(int i=1;i<s.length();++i)
	{
		pd=0;
		for(int j=i;j<s.length();++j)
			if(s[j]!=s[j-i])
			{
				pd=1;
				break;
			}
		if(pd==0)
		{
			len=i;
			break;
		}
	}
	for(int i=0;i<len;++i)
		cout<<s[i];
	cout<<s;
}

signed main()
{
	tb();
	cin>>s;
	for(int t=0;t<s.length();++t)
		if(s[t]==s[0])
			lj++;
	if(lj==s.length())
	{
		cout<<s;
		cout<<s[0];
		return 0;
	}
	else
		solve();
	return 0;
}
