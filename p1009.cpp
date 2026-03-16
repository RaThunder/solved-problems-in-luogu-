#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N=1e4+5;
int a[N],b[N],n,len,m,lenc;

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

signed main()
{
	tb();
	cin>>n;
	if(n<=1)
	{
		cout<<1;
		return 0;
	}
	n++;
	while(n--)
	{
		len=0;
		memset(a,0,sizeof(a));
		a[1]=1;
		m=n;
		while(m>=1)
		{
			len++;
			m/=10;
		}
		for(int i=n;i>=1;--i)
		{
			for(int j=1;j<=len;++j)
				a[j]*=i;
			for(int j=1;j<=len;++j)
				if(a[j]>=10)
				{
					a[j+1]+=(a[j]/10);
					a[j]%=10;
					if(j==len)
						len++;
				}
		}
		for(int i=1;i<=len;++i)
			b[i]+=a[i];	
	}
	lenc=N-10;
	for(int i=1;i<=lenc;++i)
		if(b[i]>=10)
		{
			b[i+1]+=(b[i]/10);
			b[i]%=10;
		}
	while(b[lenc]==0)
		lenc--;
	for(int i=lenc;i>=1;--i)
		cout<<b[i];
	return 0;
}
