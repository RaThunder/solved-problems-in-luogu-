#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a1[1000],a2[1000],a3[1000]={0},len;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();++i)
		a1[s1.length()-i-1]=s1[i]-'0';
	for(int i=0;i<s2.length();++i)
		a2[s2.length()-i-1]=s2[i]-'0';
	len=max(s1.length(),s2.length());
	for(int i=0;i<len;++i)
		a3[i]=a1[i]+a2[i];
	for(int i=0;i<len;++i)
		if(a3[i]>=10)
			{
				a3[i+1]=a3[i+1]+a3[i]/10;
				a3[i]%=10;
			}
	if(a3[len]!=0)
		len++;
	for(int i=len-1;i>=0;--i)
		cout<<a3[i];	
	return 0;
}
