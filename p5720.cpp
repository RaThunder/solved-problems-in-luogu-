#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,ans=1;
	cin>>a;
	while(a!=1)
	{
		ans++;
		a=a/2;
	}
	cout<<ans;
	return 0;
}
