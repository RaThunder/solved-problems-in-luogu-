#include <bits/stdc++.h>
using namespace std;

#define N 105
int a[N],m,t; 

int main()
{
	cin>>t;
	for(int i=1;i<=t;++i)
	 	cin>>a[i];
	sort(a+1,a+1+t);
	m=unique(a+1,a+1+t)-a-1;
	cout<<m<<endl;
	for(int i=1;i<=m;++i)
		cout<<a[i]<<" ";
	return 0;
}
