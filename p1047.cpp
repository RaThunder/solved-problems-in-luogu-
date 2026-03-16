#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,l,u[105],v[105],ans;
	bool a[10005]={0};
	cin>>l>>n;
	l++;
	for(int i=0;i<n;++i)
	{
		cin>>u[i]>>v[i];
		for(int j=u[i];j<=v[i];++j)
			a[j]=1;
	}
	for(int i=0;i<10005;++i)
		if(a[i]==1)
			l--;
	cout<<l;
	return 0;
}
