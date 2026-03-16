#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=1e6+9;
int op,n;
long long k;
int top;
struct
{
	int l,r;
}stk[N];
long long ans;

long long getsum(int l,int r)
{
	long long s1=0,s2=0;
	s1=(l-1)*((l-1)+1)/2;
	s2=r*(r+1)/2;
	return s2-s1;
}

signed main()
{
	tb();
	cin>>n;
	while(n--)
	{
		ans=0;
		cin>>op;
		if(op==1)
		{
			top++;
			cin>>stk[top].l>>stk[top].r;
		}
		else
		{
			cin>>k;
			while(k>=stk[top].r-stk[top].l+1)
			{
				int r=stk[top].r,l=stk[top].l;
				k-=(r-l+1);
				ans+=getsum(l,r);
				top--;
			}
			int r=stk[top].r,l=stk[top].r-k+1;
			ans+=getsum(l,r);
			stk[top].r=l-1;
			cout<<ans<<endl;
		}
	}
	return 0;
}
