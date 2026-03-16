#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[20],b,ans=0;
	for(int i=1;i<=10;++i)
		cin>>a[i];
	cin>>b;
	for(int i=1;i<=10;++i)
		if(a[i]<=b+30)
			ans++;
	cout<<ans;
	return 0;
}
