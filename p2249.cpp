#include <bits/stdc++.h>
using namespace std;

const int t=1e6+9;
int n,m,b,l,r;
long long a[t];

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int main()
{
	tb();
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	int c;
	while(m--)
	{
		l=0;r=n+1;
		cin>>b;
		while(r!=l+1)
		{
			c=(l+r)/2;
			a[c]>=b?r=c:l=c;
		}
		cout<<(a[r]==b?r:-1)<<" ";
	}
	return 0;
}
