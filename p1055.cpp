#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	int j=0,sum=0,b[20];
	cin>>a;
	for(int i=0;i<=11;++i)
		if(a[i]!='-')
		{
			j++;
			b[j]=a[i]-48;
			sum+=j*b[j];
		}
	int ans=sum%11;
	if(a[12]=='X')
	{
		if(ans==10)
			cout<<"Right";
		else
		{
			for(int i=0;i<=11;++i)
				cout<<a[i];
			cout<<ans;
		}
	}
	else if(ans==a[12]-48)
		cout<<"Right";
	else
	{
		for(int i=0;i<=11;++i)
			cout<<a[i];
		if(ans==10)
			cout<<"X";
		else
			cout<<ans;
	}
		
	return 0;
}
