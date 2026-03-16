#include <bits/stdc++.h>
using namespace std;

int main()
{
	double s;
	int ans=0;
	cin>>s;
	double a=2.00;
	while(s>0)
	{
		ans++;
		s-=a;
		a*=0.98;
	}
	cout<<ans;
	return 0;
} 
