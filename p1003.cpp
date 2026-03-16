#include <bits/stdc++.h>
using namespace std;

const int t=1e4+5;
int a[t],b[t],g[t],k[t];
int n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	int x,y;
	cin>>x>>y;
	for(int i=n;i>=1;--i)
		if((x>=a[i]&&x<=a[i]+g[i])&&(y>=b[i]&&y<=b[i]+k[i]))
		{
			cout<<i;
			return 0;
		}
	cout<<"-1";
	return 0;
}
