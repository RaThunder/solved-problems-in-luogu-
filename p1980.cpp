#include <bits/stdc++.h>
using namespace std;

int main()
{
	int ans=0,n,x;
	cin>>n>>x;
	for(int i=1;i<=n;++i)
	{
		int b=i;
		while(b>=1)
		{
			if(b%10==x)//可以从个位开始推 
				ans++;
			b=b/10;
		}
	}
	cout<<ans;
	return 0;
}
