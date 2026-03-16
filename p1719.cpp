#include <bits/stdc++.h>
using namespace std;

#define M 150
int a[M][M],p[M][M],n,cnt,ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++i)
		{
			cin>>a[i][j];
			s[i][j]=a[i][j]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
		}
	
}
