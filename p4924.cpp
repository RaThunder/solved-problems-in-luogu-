#include <bits/stdc++.h>
using namespace std;

#define T 505
int n,m,a[T][T],cnt,b[T][T];

int main()
{
	int x,y,r;
	bool z;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
		{
			cnt++;
			a[i][j]=cnt;
		}
	while(m--)
	{
		cin>>x>>y>>r>>z;
		if(z==0)
		{
			for(int i=x-r;i<=x+r+1;++i)
			{
				for(int j=y-r;j<=y+r+1;++j)
				{
					b[i][j]=a
				}
			}
		}
		else if(z==1)
		{
			
		}
		for(int i=x-r;i<=x+r+1;++i)
			for(int j=y-r;j<=y+r+1;++j)
				a[i][j]=b[i][j];
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
