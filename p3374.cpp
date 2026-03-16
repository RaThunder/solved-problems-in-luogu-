#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=5e5+9;
int n,m,op;
int a[N],t[N];

int lowbit(int x)
{
	return x&-x;
}

void add(int k,int x)
{
	for(int i=k;i<=n;i+=lowbit(i))
		t[i]+=x;
}

long long getsum(int k)
{
	long long sum=0;
	for(int i=k;i>0;i-=lowbit(i))
		sum+=t[i];
	return sum;
}

signed main()
{
	tb();
	int c1,c2;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		add(i,a[i]);
	}
	while(m--)
	{
		cin>>op;
		if(op==1)
		{
			cin>>c1>>c2;
			add(c1,c2);
		}
		else
		{
			cin>>c1>>c2;
			cout<<getsum(c2)-getsum(c1-1)<<endl;
		}
	}
	return 0;
}
