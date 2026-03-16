#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=3e4+9;
int w,n,ans,sum;
int l,r;
int a[N];

signed main()
{
	tb();
	cin>>w>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	sort(a+1,a+1+n);
	l=1,r=n;
	while(l<=r)
	{
		if(r==l)
		{
			ans++;
			break;
		}
		if(sum+a[r]<=w)
		{
			sum+=a[r];
			r--;
		}
		if(sum+a[l]<=w)
		{
			sum+=a[l];
			l++;
		}
		if(sum+a[r]>w&&sum+a[l]>w)
		{
			sum=0;
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
