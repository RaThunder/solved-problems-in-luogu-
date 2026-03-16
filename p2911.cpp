#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s1,s2,s3,a[100]={0},sum;
	cin>>s1>>s2>>s3;
	for(int i=1;i<=s1;++i)
		for(int j=1;j<=s2;++j)
			for(int t=1;t<=s3;++t)
				a[i+j+t]++;
	sum=s1+s2+s3;
	for(int i=sum;i>=1;--i)
		if(a[i]>=a[sum])
			sum=i;
	cout<<sum;
	return 0;
}
