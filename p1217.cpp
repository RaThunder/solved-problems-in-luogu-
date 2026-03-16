#include <bits/stdc++.h>
using namespace std;

#define M 100000050
int a[M],ac,bc,cnt1,cnt2;
bool b[M];

void ou(int x,int y)
{
	b[0]=1;
	b[1]=1;
	for(int i=2;i<=y;++i)
	{
		if(b[i]==0)
		{
			a[cnt1]=i;
			cnt1++;
		}
		for(int j=0;i*a[j]<=y&&j<cnt1;++j)
		{
			b[i*a[j]]=1;
			if(i%a[j]==0)
				break;
		}
	}
	for(int i=0;a[i]<x;++i)
		cnt2++;
}

bool huiwen(int x)
{
	int c=x,d=0;
	if(x<10)
		return 1;
	else
	{
		while(c>=1)
		{
			d=d*10+c%10;
			c/=10;
		}
		if(d==x)
			return 1;
		else
			return 0;
	}
}

int main()
{
	cin>>ac>>bc;
	ou(ac,bc);
	for(int i=cnt2;i<cnt1;++i)
	{
		if(huiwen(a[i])==1)
			cout<<a[i]<<endl;
	}
	return 0;
}
