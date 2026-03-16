#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n,a[5][5];
	int an1,an2,an3,b[5],c[5];
	cin>>n;
	for(int i=1;i<=3;++i)
	{
		for(int j=1;j<=2;++j)
			cin>>a[i][j];
		b[i]=ceil(n/a[i][1]);
		c[i]=b[i]*a[i][2];
	}
	sort(c+1,c+4);
	cout<<c[1];
	return 0;
}
