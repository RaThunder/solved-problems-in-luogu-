#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[1000]={0},i=1000;
	cin>>n;
	while(n!=1)
	{
		a[i]=n;
		i--;
		if(n%2==1)
			n=3*n+1;
		else
			n/=2;
	}
	cout<<"1";
	for(int j=i+1;j<=1000;++j)
		cout<<" "<<a[j];
	return 0;
}
