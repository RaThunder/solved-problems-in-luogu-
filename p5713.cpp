#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,lo,lu;
	cin>>n;
	lo=5*n;
	lu=11+3*n;
	if(lo>lu)
		cout<<"Luogu";
	else
		cout<<"Local";
	return 0;
}
