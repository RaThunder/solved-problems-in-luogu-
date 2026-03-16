#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=2e5+9;
int n;
int a[N];
map<int,int> t;

signed main()
{
	tb();
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		t[a[i]]?t[a[i]]++:t[a[i]]=1;
	}
	for(const auto &i:t)
		cout<<i.first<<" "<<i.second<<endl;
	return 0;
}
