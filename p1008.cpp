#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

string s;
int a[15];
int p[5],cnt;

bool cli(int b,int q,int bli)
{
	return (b%q==0&&b/q==bli);
}

bool check(int x,int y,int z)
{
	return (cli(y,x,2)&&cli(z,x,3));
}

signed main()
{
	tb;
	s="123456789";
	do
	{
		cnt=0;
		memset(p,0,sizeof(p));
		for(int i=0;i<9;++i)
			a[i]=s[i]-'0';
		for(int i=0;i<9;++i)
		{
			if(i%3==0)
				cnt++;
			p[cnt]+=(a[i]*pow(10,(3*cnt-i-1)));
		}
		if(check(p[1],p[2],p[3]))
			cout<<p[1]<<' '<<p[2]<<' '<<p[3]<<endl;
	}while(next_permutation(s.begin(),s.end()));
	return 0;
}
