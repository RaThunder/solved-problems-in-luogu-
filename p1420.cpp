#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,j=1;
	long long a[1000],b[1000];
	b[1]=1;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=1;i<=n-1;++i)
	{
		if(a[i+1]==a[i]+1)
			b[j]++;
		else
		{
			j++;
			b[j]=1;
		}
	}
	sort(b+1,b+1+j);
	cout<<b[j];
	return 0;
}
