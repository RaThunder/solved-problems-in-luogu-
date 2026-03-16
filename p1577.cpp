#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e4+9;
int n,k,a[N];
int l,r,mid;
double L[N];

bool check(int len)
{
	int cnt=0;
	for(int i=1;i<=n;++i)
		cnt+=a[i]/len;
	return cnt>=k;
}

signed main()
{
	tb();
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	{
		cin>>L[i];
		a[i]=L[i]*100;
		r=max(r,a[i])+1;
	}
	l=0;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(mid==0)
			break;
		if(check(mid))
			l=mid+1;
		else
			r=mid-1;
	}
	printf("%.2lf",(double)r/100);
	return 0;
}
