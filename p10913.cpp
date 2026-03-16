#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e3+9;
int n,w,h;
struct P
{
	int x,y,r;
}a[N];
int ans,sum;

signed main()
{
	tb;
	cin>>n>>w>>h;
	for(int i=1;i<=n;++i)
		cin>>a[i].x>>a[i].y>>a[i].r;
	for(int i=1;i<=n;++i)
	{
		int x1=a[i].x,y1=a[i].y,r1=a[i].r;
		for(int k=1;k<=4;++k)
		{
			sum=1;
			for(int j=1;j<=n;++j)
			{
				int x2=a[j].x,y2=a[j].y,r2=a[j].r;
				if(k==1)
					if(x2-x1>=0&&y1-y2>=0&&x2-x1+r1+r2<=w&&y1-y2+r1+r2<=h)
						sum++;
				else if(k==2)
					if(x2-x1>=0&&y1-y2>=0&&x2-x1+r1+r2<=h&&y1-y2+r1+r2<=w)
						sum++;
				else if(k==3)
					if(x1-x2>=0&&y1-y2>=0&&x1-x2+r1+r2<=h&&y1-y2+r1+r2<=w)
						sum++;
				else if(k==4)
					if(x1-x2>=0&&y1-y2>=0&&x1-x2+r1+r2<=w&&y1-y2+r1+r2<=h)
						sum++;
			}
			ans=max(ans,sum);
		}
	}
	cout<<ans;
	return 0;
}
