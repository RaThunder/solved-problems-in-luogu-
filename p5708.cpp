#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,c,s;
	cin>>a>>b>>c;
	double p=(a+b+c)/2;
	double d=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.1lf",d);
	return 0;
}
