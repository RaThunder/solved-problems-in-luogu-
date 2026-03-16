#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	getline(cin,a);
	int b=a.length();
	for(int i=0;i<a.length();i++)
		if(a[i]==' ')
			b--;
	cout<<b;
	return 0;
}
