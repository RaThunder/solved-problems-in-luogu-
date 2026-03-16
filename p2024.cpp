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
int n,k;
int ans;
int pre[N];

int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb();
	cin>>n>>k;
	for(int i=1;i<=3*n;++i)
		pre[i]=i;//self,food,enemy
	for(int i=1;i<=k;++i)
	{
		int pd,x,y;
		cin>>pd>>x>>y;
		if(x>n||y>n)
		{
			ans++;
			continue;
		}
		if(pd==1)
		{
			if(root(x+n)==root(y)||root(y+n)==root(x))
				ans++;
			else
			{
				pre[root(x)]=root(y);
				pre[root(x+n)]=root(y+n);
				pre[root(x+2*n)]=root(y+2*n);
			}
		}
		else
		{
			if(x==y||root(x)==root(y)||root(x)==root(y+n))
				ans++;
			else
			{
				pre[root(x+n)]=root(y);
				pre[root(x+2*n)]=root(y+n);
				pre[root(x)]=root(y+2*n);
			}
		}
	}
	cout<<ans;
	return 0;
}
