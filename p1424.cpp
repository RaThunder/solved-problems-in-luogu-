#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,n;
	long long ans=0;
	cin>>x>>n;
	for(int i=1;i<=n;i++)
	{
		if(x%7!=0&&x%6!=0)
			ans+=250;
		if(x==7)
			x=1;
		else
			x++;
	}
	cout<<ans;
	return 0;
}
