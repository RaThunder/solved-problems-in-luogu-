#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e5+9;
const int MAXINUM=2e9+1;
int n,m,k;
int a[N],b[N];
long long sum;

bool check(int mid)
{
	int index=0;
	for(int i=1;i<=n;++i)
	{
		int p=upper_bound(b,b+m,mid-a[i])-(b);
		index+=p;
	}
	return index>=k;
}

signed main()
{
	tb;
	cin>>n>>m>>k;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=0;i<m;++i)
		cin>>b[i];
	sort(b,b+m);
	int l=0,r=MAXINUM;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(check(mid))
			r=mid;
		else
			l=mid;
	}
	cout<<r;
	return 0;
}
