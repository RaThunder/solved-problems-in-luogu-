#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

#define N 30
int n;
string s[N];

bool cmp(string a,string b)
{
	return (a+b>b+a);
}

signed main()
{
	tb();
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>s[i];
	sort(s,s+n,cmp);
	for(int i=0;i<n;++i)
		cout<<s[i];
	return 0;
}
