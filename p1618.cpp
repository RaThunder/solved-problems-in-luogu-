#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int a[5],p;
int t[5],d[20];
bool f,l;

bool pd(int x,int y,int z)
{
	int c[]={x,y,z};
	memset(d,0,sizeof(d));
	for(int u=0;u<3;++u)
		for(int g=1;g<=3;++g)
		{
			d[c[u]%10]++;
			c[u]/=10;
		}
	for(int u=1;u<=9;++u)
		if(d[u]!=1)
			return 0;
	return 1;
}

signed main()
{
	tb();
	for(int i=1;i<=3;++i)
		cin>>a[i];
	for(int i=1;i<=1000/a[3];++i)
	{
		l=0;
		for(int j=1;j<=3;++j)
		{
			t[j]=i*a[j];
			if(t[j]>999)
			{
				l=1;
				break;
			}
		}
		if(l==1)
			break;
		if(pd(t[1],t[2],t[3])==1)
		{
			for(int k=1;k<=3;++k)
				cout<<t[k]<<" ";
			f=1;
			cout<<endl;
		}
	}
	if(f==0)
		cout<<"No!!!";
	return 0;
}
