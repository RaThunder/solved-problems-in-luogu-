#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=5e4+9;
string s[N];
char pd[N];
int l;
map<string,string> pre;

string root(string x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb();
	while(1)
	{
		l++;
		cin>>pd[l];
		if(pd[l]=='$')
		{
			l--;
			break;
		}
		cin>>s[l];
		pre[s[l]]=s[l];
	}
	for(int i=1;i<=l;++i)
	{
		if(pd[i]=='#')
		{
			int j=i;
			while(1)
			{
				j++;
				if(pd[j]!='+')
					break;
				pre[s[j]]=s[i];
			}
		}
		if(pd[i]=='?')
			cout<<s[i]<<' '<<root(s[i])<<endl;
	}
	return 0;
}
