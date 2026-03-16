#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int n;
int a[10];
int p1,p2,p3;
long long ans;

signed main()
{
	tb;
	cin>>n;
	for(int i=1;i<=9;++i)
		a[i]=i;
	do
	{
		p1=0;
		for(int i=1;i<=7;++i)
		{
			p1=p1*10+a[i];
			p2=0;
			for(int j=i+1;j<=8;++j)
			{
				p2=p2*10+a[j];
				p3=0;
				for(int k=j+1;k<=9;++k)
					p3=p3*10+a[k];
				if(p2%p3==0&&p1+p2/p3==n)
					ans++;
			}
		}
	}while(next_permutation(a+1,a+1+9));
	cout<<ans;
	return 0;
}
