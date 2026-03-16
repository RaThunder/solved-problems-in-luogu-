#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=5e5+9;
int n,m,op;
int a[N];
long long d1[N],d2[N];

int lowbit(int x)
{
	return x&-x;
}

void add(int k,int x)
{
	for(int i=k;i<=n;i+=lowbit(i))
	{
		d1[i]+=x;
		d2[i]+=k*x;
	}
}

long long getsum(int k)
{
	long long sum=0;
	for(int i=k;i>0;i-=lowbit(i))
		sum+=((k+1)*d1[i]-d2[i]);
	return sum;
}

signed main()
{
	int c1,c2,c3;
	tb;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		add(i,a[i]);
		add(i+1,-a[i]);
	}
	while(m--)
	{
		cin>>op;
		if(op==1)
		{
			cin>>c1>>c2>>c3;
			add(c1,c3);
			add(c2+1,-c3);
		}
		else
		{
			cin>>c1;
			cout<<getsum(c1)-getsum(c1-1)<<endl;
		}
	}
	return 0;
}
