#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a=0;
	cin>>n;
	for(int i=n;i>=1;--i)
	{
		for(int j=1;j<=i;++j)
		{
			a++;
			if(a<10)
				printf("0%d",a);
			else
				printf("%d",a);
		}
		cout<<endl;
	}
	return 0;
}
