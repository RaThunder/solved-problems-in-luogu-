#include <bits/stdc++.h>
using namespace std;

#define T 5000005
long long a[T],d[T],n,p,x,y,z;

int main()
{
	cin>>n>>p;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		d[i]=a[i]-a[i-1];
	}
	while(p--)
	{
		cin>>x>>y>>z;
		d[x]+=z;
		d[y+1]-=z;
	}
	for(int i=1;i<=n;++i)
		a[i]=a[i-1]+d[i];
	sort(a+1,a+n/2);
	sort(a+n/2+1,a+n+1);
	cout<<(a[1]<a[n/2+1]?a[1]:a[n/2+1]);
	return 0;
}
