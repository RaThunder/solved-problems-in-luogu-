#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e2+9;
int b1,b2;
int a,cnt;
string s;
int ans[N];

signed main()
{
	tb();
	cin>>b1;
	cin>>s;
	cin>>b2;
	for(int i=s.length()-1,j=1;i>=0;--i,j*=b1)
	{
		if(isdigit(s[i]))
			a+=((s[i]-'0')*j);
		else
			a+=(((s[i]-'A')+10)*j);
	}
	while(a>=1)
	{
		ans[cnt++]=a%b2;
		a/=b2;
	}
	for(int i=cnt-1;i>=0;--i)
	{
		if(ans[i]>=10)
			cout<<(char)((ans[i]-10)+'A');
		else
			cout<<ans[i];
	}
	return 0;
}
