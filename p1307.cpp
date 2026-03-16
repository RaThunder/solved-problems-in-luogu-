//数字反转 (也可以用栈） 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a,s=0;
	cin>>a;
	if(a<0)
	{
		a=-a;
		cout<<"-";
	}
	while(a>=1)
	{
		s=s*10+a%10;
		a/=10;
	}
	cout<<s;
	return 0;
}
