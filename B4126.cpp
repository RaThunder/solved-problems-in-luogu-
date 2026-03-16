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
bool typ;
int ans,pat[5];
int pl;
string gc[]={"L","L\'","R","R\'"};

void solve1()
{
	for(int i=0;i<s.length();++i)
	{
		if(s[i]=='(')
			pl=0;
		else if(s[i]==')')
		{
			ans-=pl;
			ans++;
		}
		else if(isalpha(s[i]))
		{
			pl++;
			ans++;
		}
	}
	cout<<ans<<endl;
}

void solve2()
{
	for(int i=0;i<s.length();++i)
	{
		
	}
}

signed main()
{
	tb();
	cin>>s;
	cin>>typ;
	solve(1);
	if(typ==1)
		solve(2);
	return 0;
}
