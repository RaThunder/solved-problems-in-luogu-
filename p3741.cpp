#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s[105];
	int n,ans=0;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>s[i];
	for(int i=0;i<n;++i)
		if(s[i]=='V'&&s[i+1]=='K')
		{
			ans++;
			s[i]=' ';
			s[i+1]=' ';
		}
	for(int i=0;i<n-1;++i)
	{
		if(s[i]==s[i+1]&&s[i]!=' '&&s[i+1]!=' ')
		{
			ans++;
			break;
		}
		/*if(s[i]=='V'&&s[i+1]!=' ')
		{
			cout<<1<<" ";
			ans++;
			break;
		}	
		else if(s[i]=='K'&&s[i-1]!=' ')
		{
			cout<<2<<" ";
			ans++;
			break;
		}*/
		//ÒÅ¼£ 
		
	}
	cout<<ans;
	return 0;
}
