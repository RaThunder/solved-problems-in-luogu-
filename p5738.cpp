#include <bits/stdc++.h>
using namespace std;

#define D 1000
int n,m,a[D]={0};
double sum1,ans,sum2;

void sing(int x)
{
	sum1=0.0;
	for(int i=1;i<=m;++i)
		cin>>a[i];
	sort(a+1,a+m+1);
	for(int i=2;i<=m-1;++i)
		sum1+=a[i];
	sum2=sum1/(m-2);
	if(sum2>ans)
		ans=sum2;
	if(x<n)
		sing(x+1);
}

int main()
{
	cin>>n>>m;
	sing(1);
	printf("%.2lf",ans);
	return 0;
}
