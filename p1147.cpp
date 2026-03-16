#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int q=2e6+9;
int m,p[q];

signed main()
{
	tb();
	cin>>m;
	for(int i=1;i<m;++i)
		p[i]=p[i-1]+i;
	for(int i=1,j=0;i<m;++i)
	{
		while(p[j]-p[i-1]<m&&j<m)
		{
			j++;
		}
		if(p[j]-p[i-1]==m)
			printf("%d %d\n",i,j);
		
	}
	return 0;
}
