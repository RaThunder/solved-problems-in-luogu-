#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N=5e4+9;
int n;
struct str
{
	int a,b,c;
}st[N];
double ans;

bool cmp(str x,str y)
{
	return x.c<y.c;
}

double ojld(int i1,int i2)
{
	double sum;
	sum=pow(st[i2].a-st[i1].a,2)+pow(st[i2].b-st[i1].b,2)+pow(st[i2].c-st[i1].c,2);
	return sqrt(sum*1.0000);
}

signed main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>st[i].a>>st[i].b>>st[i].c;
	sort(st+1,st+1+n,cmp);
	for(int i=1;i<n;++i)
		ans+=ojld(i,i+1);
	printf("%.3lf",ans);
	return 0;
}
