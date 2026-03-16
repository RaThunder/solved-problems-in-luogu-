#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

string s;
long long ans[2];
long long dp[5];

void solve1()
{
	for(int i=1;i<=2023;++i)
		s+=to_string(i);
	for(int i=0;i<s.length();++i)
	{
		if(s[i]=='2')
		{
			dp[0]++;
			dp[2]+=dp[1];
		}
		else if(s[i]=='0')
			dp[1]+=dp[0];
		else if(s[i]=='3')
			dp[3]+=dp[2];
	}
	ans[0]=dp[3];
}

const int N=5e6+9;
vector<long long> v;
bool b[N];

void ou()
{
	b[0]=1;
	b[1]=1;
	for(int i=2;i<=N;i++)
	{
		if(b[i]==0)
			v.push_back(i);
		for(int j=0;j<v.size()&&v[j]*i<=N;j++)
		{
			b[v[j]*i]=1;
			if(i%v[j]==0)
				break;
		}
	}
}

void solve2()
{
	ou();
	ans[1]=0;
	for(int i=0;i<v.size();i++)
	{
		
		if((long long)v[i]*v[i]*v[i]*v[i]>23333333333333)
			break;
		for(int j=i+1;j<v.size();j++)
		{
			long long p=v[i]*v[i]*v[j]*v[j];
			if(p<2333)
				continue;
			if(p>23333333333333)
				break;
			ans[1]++;
		}
	}
	
}

signed main()
{
	tb;
	char T;
    cin>>T;
    int t=T-'A';
    if(t==0)
    	solve1();
    else
    	solve2();
    cout<<ans[t]<<endl;
    return 0;
}
