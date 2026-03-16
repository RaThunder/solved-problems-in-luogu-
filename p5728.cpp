#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[5][1005],sum[1005]={0},ans;
	cin>>n;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=3;++j)
		{
			cin>>a[j][i];
			sum[i]+=a[j][i];
		}
	for(int i=1;i<=n;++i)
		for(int j=1;j<=i;++j)
			if(abs(a[1][i]-a[1][j])<=5&&abs(a[2][i]-a[2][j])<=5&&abs(a[3][i]-a[3][j])<=5&&abs(sum[i]-sum[j])<=10&&i!=j)
				ans++;		
	cout<<ans;
	return 0;
}
