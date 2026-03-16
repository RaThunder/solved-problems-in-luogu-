#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

string s;
long long ans,ans1,ans2;
int p,lp,llp;
int cnt;

inline void pol()
{
	llp=lp;
	lp=p;
}

inline void solve()
{
	if(p==0)
	{
		ans++;
		cout<<1<<' ';
	}
		
	else if(lp==0)
	{
		ans+=p;
		cout<<2<<' ';
	}
	
	else
	{
		ans1=lp-llp-1;
		ans2=p-lp-1;
		ans+=(ans1+ans2+1+ans1*ans2);
		cout<<3<<' ';
	}
	cout<<ans<<endl; 
	pol();
}

signed main()
{
	tb;
	cin>>s;
	for(int i=0;i<26;++i)
	{
		char c='a'+i;
		p=-1,lp=-1,llp=-1;
		for(int j=0;j<s.length();++j)
		{
			if(s[j]==c)
			{
				cout<<c<<' ';
				p=j;
				solve();
				cnt++;
			}
			else if(j==s.length()-1)
			{
				cout<<c<<' ';
				p=s.length();
				solve();
			}
		}
		if(cnt==s.length())
			break;
	}
	//cout<<ans;
	return 0;
}
