#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

string s1,s2;
int ans;

char getswap(char c)
{
	if(c=='*')
		return 'o';
	else
		return '*';
}

signed main()
{
	tb;
	cin>>s1;
	cin>>s2;
	int len=s1.length();
	for(int i=0;i<len-1;++i)
		for(int j=i;j<len-1;++j)
			if(s1[j]!=s2[j])
			{
				s2[j]=getswap(s2[j]);
				s2[j+1]=getswap(s2[j+1]);
				ans++;
			}
	cout<<ans;
	return 0;
}
