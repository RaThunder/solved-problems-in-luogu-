#include <bits/stdc++.h>
using namespace std;

#define N 10000000
long long a1[N],a2[N],ans[N]={0},len;
bool len1=0;

int panduan(string x,string y)
{
	bool l=0;
	if(x.length()==1&&x[0]=='0')
		l=1;
	if(y.length()==1&&y[0]=='0')
		l=1;
	return l==1?1:0;
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(panduan(s1,s2)==1)
	{
		cout<<"0";
		return 0;
	}
	for(int i=0;i<s1.length();++i)
		a1[s1.length()-i-1]=s1[i]-'0';
	for(int i=0;i<s2.length();++i)
		a2[s2.length()-i-1]=s2[i]-'0';
	for(int i=0;i<s1.length();++i)
		for(int j=0;j<s2.length();++j)
			ans[i+j]+=a1[i]*a2[j];
	len=s1.length()+s2.length()-1;
	for(int i=0;i<len;++i)
	{
		if(ans[i]>=10)
		{
			ans[i+1]+=ans[i]/10;
			ans[i]%=10;
		}
		if(ans[len]>10)
			len++;
		else if(ans[len]>0)
			len1=1;
	}
	if(len1==1)
		len++;
	for(int i=len-1;i>=0;--i)
		cout<<ans[i];
	return 0;
}
