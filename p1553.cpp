#include <bits/stdc++.h>
using namespace std;

int t;
string s,ans1,ans2;

int panduan(string a)
{
	for(int i=0;i<a.length();++i)
	{
		if(a[i]=='.')
		{
			t=i;
			return 1;
		}
			
		if(a[i]=='/')
		{
			t=i;
			return 2;
		}
		if(a[i]=='%')
			return 3;
	}
	return 0;
}

void quo1(int n)
{
	while(1)
	{
		if(ans1[n]==0)
		{
			ans1.erase(n);
			n--;
		}
		else
			break;
	}
}

void quo2(int n)
{
	while(1)
	{
		if(ans2[n]==0)
		{
			ans2.erase(n);
			n--;
		}
		else
			break;
	}
}

int main()
{
	cin>>s;
	if(panduan(s)==0)
	{
		for(int i=s.length()-1;i>=0;--i)
			ans1[i]=s[i];
		quo1(ans2.length()-1);
		for(int i=ans1.length()-1;i>=0;--i)
			cout<<ans1[i];
	}
	else if(panduan(s)==1)
	{
		for(int i=t-1;i>=0;--i)
			ans1[i]=s[i];
		quo1(0);
		for(int i=t-1;i>=0;--i)
			cout<<ans1[i];
		cout<<".";
		for(int i=s.length()-1;i>=t+1;--i)
			ans2[i]=s[i];
		quo2(ans2.length()-1);
		for(int i=ans2.length()-1;i>=t+1;--i)
			cout<<ans2[i];
	}
}
