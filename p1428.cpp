#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[105],ans;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		ans=0;
		cin>>a[i];
		for(int j=1;j<=i;++j)
			if(a[j]<a[i])
				ans++;
		cout<<ans<<" ";
	}
	return 0;
}
