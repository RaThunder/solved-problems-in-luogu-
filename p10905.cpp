#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e6+9;
int t;

inline bool pd(char c)
{
	return (c=='l'||c=='q'||c=='b');
}

inline bool check(string s)
{
	bool flag=0;
	for(int i=0;i<s.length();++i)
		if(!pd(s[i]))
		{
			flag=1;
			break;
		}
	if(!flag)
		return 1;
	char p[N];
	int l=0,r=s.length()-1;
	while(l<r)
	{
		if(pd(s[l]))
			l++;
		if(pd(s[r]))
			r--;
		if(!pd(s[l])&&!pd(s[r]))
		{
			for(int i=l;i<=r;++i)
				p[i-l+1]=s[i];
			break;
		}
	}
	cout<<l<<' '<<r;
	if(l<r)
		for(int i=1;i<=(r-l+1)/2;++i)
			if(p[i]!=p[r-l+2-i])
				return 0;
	for(int i=l+1,j=r-1;i>=0&&j<=s.length()-1;--i,++j)
		if(s[i]!=s[j])
			return 0;
	return 1;
}

signed main()
{
	tb;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		if(check(s))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
