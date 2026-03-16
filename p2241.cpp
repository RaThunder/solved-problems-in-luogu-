#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

long long m,n;

int jia(int x)
{
	int a=x+1,sum=0;
	while(a--)
		sum+=a;
	return sum;
}

int zhe(int y,int z)
{
	long long ans1=0;
	int a1=y,a2=z;
	while(1)
	{
		ans1+=(a1*a2);
		a1--;
		a2--;
		if(a1==0||a2==0)
			break;
	}
	return ans1;
}

signed main()
{
	tb();
	cin>>n>>m;
	long long p1=zhe(n,m),p2=jia(n)*jia(m);
	cout<<p1<<" "<<p2-p1;
	return 0;
}
