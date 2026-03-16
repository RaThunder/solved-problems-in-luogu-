#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=60;
long long stk[N],top;
string s;
int a,len;

signed main()
{
	tb();
	int p=0,c=1;
	while(cin>>s[++p])
	{
		a=0;
		if(s[p]=='.')
		{
			for(int i=c;i<p;++i)
			{
				a+=s[i];
				a*=10;
			}
			a/=10;
			stk[++top]=a;
		}
	}
}
