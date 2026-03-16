#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=2e3,M=5e3+9;
int a[M][N],n,len;

signed main()
{
	tb();
	cin>>n;
	len=1;
	a[0][1]=1;
	a[1][1]=1;
	if(n==1)
		cout<<1;
	else
	{
		for(int i=2;i<=n;++i)
		{
			for(int j=1;j<=len;++j)
				a[i][j]+=(a[i-1][j]+a[i-2][j]);
			for(int j=1;j<=len;++j)
				if(a[i][j]>=10)
				{
					a[i][j+1]+=a[i][j]/10;
					a[i][j]%=10;
					if(j==len)
						len++;
				}
		}
		for(int i=len;i>=1;--i)
			cout<<a[n][i];
	}
	return 0;
}
