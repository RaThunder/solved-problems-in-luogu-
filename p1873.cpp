#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e6+9;
int n,m,h,cnt,sum1,sum2;
int a[N],p[N];

signed main()
{
	tb();
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<=n;++i)
		p[i]=a[i]+p[i-1];
	//h=a[lower_bound(a+1,a+1+n,m)-(a+1)];
	for(int i=n;i>=1;--i)
	{
		h=a[i];
		if((p[n]-p[i])-h*(n-i)>=m)
		{
			cnt=i;
			sum1=p[n]-p[i];
			sum2=n-i;
			break;
		}
	}
	for(int i=a[cnt+1];i>=a[cnt];--i)
	{
		h=i;
		if((sum1-h*sum2)>=m)
			break;
	}
	cout<<h;
	return 0;
}
