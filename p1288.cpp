#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int n;
int a[25];
int a1,a2;

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=1;i<=n;++i)
		if(a[i]==0)
		{
			a1=i;
			break;
		}
	for(int i=n;i>=1;--i)
		if(a[i]==0)
		{
			a2=n-i+1;
			break;
		}
	if(a1%2==0||a2%2==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
