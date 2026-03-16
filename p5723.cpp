#include <bits/stdc++.h>
using namespace std;

#define N 100005
int a[N],cnt,sum,l,ans;
bool b[N]={1,1};

void ou(int x)
{
	for(int i=2;i<=x;++i)
	{
		if(b[i]==0)
		{
			a[cnt]=i;
			sum+=a[cnt];
			if(sum>x)
				break;
			cnt++;
			ans++;
		}
		for(int j=0;i*a[j]<x&&j<cnt;++j)
		{
			b[i*a[j]]=1;
			if(i%a[j]==0)
				break;
		}
	}
}

int main()
{
	cin>>l;
	ou(l);
	for(int i=0;i<cnt;++i)
		cout<<a[i]<<endl;
	cout<<ans;
	return 0;
}
