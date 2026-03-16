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
int h[N],n,stk[N],top,a[N];

signed main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>h[i];
	for(int i=n;i>=1;--i)
	{
		while(h[i]>=h[stk[top]]&&top!=0)
			top--;
		a[i]=stk[top];
		stk[++top]=i;
	}
	for(int i=1;i<n;++i)
		cout<<a[i]<<endl;
	cout<<"0";
	return 0;
}
