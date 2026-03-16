#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a[10001],ans,sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	if(m==n)
	{
		ans=0;
		for(int i=1;i<=n;++i)
			ans+=a[i];
	}	
	else
	{
		ans=INT_MAX;
		for(int j=1;j<=n-m;++j)
		{
			sum=0;
			for(int i=j;i<m+j;++i)
				sum+=a[i];
			if(sum<ans)
				ans=sum;
		}
	}	
	cout<<ans;
	return 0;	
}
