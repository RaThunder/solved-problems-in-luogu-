#include <bits/stdc++.h>
using namespace std;

const int p=1e5+9;
int t,n,m,l,r,s[p];

int main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>t;
		s[i]=s[i-1]+t;
	}
	cin>>m;
	while(m--)
	{
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<endl;
	}
	return 0;
}
