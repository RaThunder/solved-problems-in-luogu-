#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k,ans=0,c1,c2,x,y;
	bool b[108][108]={0};
	cin>>n>>m>>k;
	for(int i=1;i<=m;++i)
	{
		cin>>c1>>c2;
		x=c1+1;
		y=c2+1;
		b[x-2][y]=1;
		b[x-1][y-1]=1;
		b[x-1][y]=1;
		b[x-1][y+1]=1;
		b[x][y-2]=1;
		b[x][y-1]=1;
		b[x][y]=1;
		b[x][y+1]=1;
		b[x][y+2]=1;
		b[x+2][y]=1;
		b[x+1][y-1]=1;
		b[x+1][y]=1;
		b[x+1][y+1]=1;
	}
	if(k==1)
	{
		cin>>c1>>c2;
		x=c1+1;
		y=c2+1;
		b[x-2][y]=1;
		b[x-2][y-2]=1;
		b[x-2][y-1]=1;
		b[x-2][y+1]=1;
		b[x-2][y+2]=1;
		b[x-1][y-2]=1;
		b[x-1][y-1]=1;
		b[x-1][y]=1;
		b[x-1][y+1]=1;
		b[x-1][y+2]=1;
		b[x][y-2]=1;
		b[x][y-1]=1;
		b[x][y]=1;
		b[x][y+1]=1;
		b[x][y+2]=1;
		b[x+2][y]=1;
		b[x+2][y-2]=1;
		b[x+2][y-1]=1;
		b[x+2][y+1]=1;
		b[x+2][y+2]=1;
		b[x+1][y-1]=1;
		b[x+1][y-2]=1;
		b[x+1][y]=1;
		b[x+1][y+1]=1;
		b[x+1][y+2]=1;
	}
	else if(k>1)
		for(int i=1;i<=k;++i)
		{
			cin>>c1>>c2;
			x=c1+1;
			y=c2+1;
			b[x-2][y]=1;
			b[x-2][y-2]=1;
			b[x-2][y-1]=1;
			b[x-2][y+1]=1;
			b[x-2][y+2]=1;
			b[x-1][y-2]=1;
			b[x-1][y-1]=1;
			b[x-1][y]=1;
			b[x-1][y+1]=1;
			b[x-1][y+2]=1;
			b[x][y-2]=1;
			b[x][y-1]=1;
			b[x][y]=1;
			b[x][y+1]=1;
			b[x][y+2]=1;
			b[x+2][y]=1;
			b[x+2][y-2]=1;
			b[x+2][y-1]=1;
			b[x+2][y+1]=1;
			b[x+2][y+2]=1;
			b[x+1][y-1]=1;
			b[x+1][y-2]=1;
			b[x+1][y]=1;
			b[x+1][y+1]=1;
			b[x+1][y+2]=1;
		}

	for(int i=2;i<=n+1;++i)
		for(int j=2;j<=n+1;++j)
			if(b[i][j]==0)
				ans++;
	cout<<ans;
	return 0;
}
