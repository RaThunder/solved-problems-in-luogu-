#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int p=3e6+9;
int n,cnt,top;
long long a[p],f[p],stk[p];

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	cnt=n;
	for(int i=n;i>=1;--i)
	{
		while(top!=0&&a[i]>=a[stk[top]])
			top--;
		f[i]=(top==0?0:stk[top]);
		stk[++top]=i;
	}
	for(int i=1;i<=n;++i)
		cout<<f[i]<<" ";
	return 0;
}
