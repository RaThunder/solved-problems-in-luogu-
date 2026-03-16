#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[10005]={0},ans=0,t,b[10005]={0},k=1;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	
	for(int i=1;i<=n;++i)
		for(int j=i+1;j<=n;++j)
		{
			t=1;
			while(t<=n)
			{
				if(a[i]+a[j]==a[t])
				{
					b[k]=a[t];
					k++;
					break;
				}
				t++;
			}
		}
	
	for(int i=1;i<k;++i)
		for(int j=i+1;j<=k;++j)
			if(b[i]==b[j])
				b[j]=-1;
	for(int i=1;i<=k;++i)
		if(b[i]>0)
			ans++;
	cout<<ans;
	return 0;
}
