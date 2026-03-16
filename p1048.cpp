//01±³°ü 
#include <bits/stdc++.h>
using namespace std;

#define N 1001
int a[N],v[N],w[N];

int main()
{
	int t,m;
	a[0]=0;
	scanf("%d%d",&t,&m);
	for(int i=1;i<=m;++i)
		scanf("%d%d",&w[i],&v[i]);
	for(int i=1;i<=t;++i)
		for(int j=t;j>=w[i];--j)
			a[j]=max(a[j],a[j-w[i]]+v[i]);
	printf("%d",a[t]);
	return 0;
}
