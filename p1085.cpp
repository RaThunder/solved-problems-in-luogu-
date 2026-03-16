#include <bits/stdc++.h>
using namespace std;

/*int main()
{
	int a[7],b[7],ans,c[7],d[7];
	for(int i=1;i<=7;++i)
	{
		cin>>a[i]>>b[i];
		c[i]=a[i]+b[i];
		d[i]=c[i];
	}
	sort(c,c+8);
	for(int i=7;i>=1;--i)
		if(d[i]==c[7])//md是两个等于！ 
			ans=i;
	cout<<ans;
	return 0;
}*/
//排序会炸tle，我也不知道为什么（悲

int main()
{
	int a[10][5],ans,sum=0;
	for(int i=1;i<=7;++i)
	{
		for(int j=1;j<=2;++j)
			cin>>a[i][j];
	}
	for(int i=1;i<=7;++i)
	{
		if(a[i][1]+a[i][2]>sum)
		{
			sum=a[i][1]+a[i][2];
			ans=i;
		}
	}
	if(sum<=8)
		cout<<"0";
	else	
		cout<<ans;
	return 0;		
}
