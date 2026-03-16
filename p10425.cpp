#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=2e3+9;
int n;
string s;
int len,len1,len2;
int a[N];
bool flag;

signed main()
{
	tb;
	cin>>n;
	cin>>s;
	len=s.length();
	for(int i=0;i<len;++i)
	{
		if(s[i]=='.')
		{
			len1=i;
			len2=len-len1-1;
			flag=1;
		}
		else
		{
			if(!flag)
				a[len-i-1]=s[i]-'0';
			else
				a[len-i]=s[i]-'0';
		}
			
	}
	len--;
	while(n--)
	{
		for(int i=1;i<=len;++i)
			a[i]*=2;
		for(int i=1;i<=len;++i)
			if(a[i]>=10)
			{
				a[i+1]++;
				a[i]-=10;
				if(i==len)
				{
					len++;
					len1++;
				}
			}
	}
	if(a[len2]>=5)
	{
		a[len2+1]++;
		for(int i=len2+1;i<=len;++i)
			if(a[i]>=10)
			{
				a[i+1]++;
				a[i]-=10;
				if(i==len)
				{
					len++;
					len1++;
				}
			}
	}
	for(int i=len;i>=len2+1;--i)
		cout<<a[i];
	return 0;
}
