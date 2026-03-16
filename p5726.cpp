#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[1005];
	double sum=0.0;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	sort(a+1,a+1+n);
	for(int i=2;i<=n-1;++i)
		sum+=a[i];
	printf("%.2lf",sum/(n-2));
	return 0;
}
