#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e5+9;
int n,k,l,r,ans;
int a[N];

signed main()
{
	tb();
	r=INT_MAX;
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		r=max(a[i],r);
	}
	while(l<r-1&&(l+r)/2!=0)
	{
		ans=0;
		for(int i=1;i<=n;++i)
			ans+=a[i]/((l+r)/2);
		if(ans>=k)
			l=(l+r)/2;
		else
			r=(l+r)/2;
		//cout<<l<<" "<<r<<endl;
	}
	cout<<l;
	return 0;
}
