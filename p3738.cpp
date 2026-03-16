#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

string s1[]={"jia","yi","bing","ding","wu","ji","geng","xin","ren","gui"};
string s2[]={"zi","chou","yin","mao","chen","si","wu","wei","shen","you","xu","hai"};
int a,cnt1,cnt2;

signed main()
{
	tb;
	cin>>a;
	a+=56;
	a%=60;
	while(a--)
	{
		cnt1=(cnt1==9)?0:cnt1+1;
		cnt2=(cnt2==11)?0:cnt2+1;
	}
	cout<<s1[cnt1]<<s2[cnt2];
	return 0;
}
