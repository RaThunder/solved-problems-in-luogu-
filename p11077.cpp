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
int T;
int n,k;
int a[N];
char c[]={'F','L'};

bool pd(int f1,int f2)
{
	return ((f1+k)>=f2&&f1!=f2);
}

signed main()
{
	tb();
	cin>>T;
	while(T--)
	{
		priority_queue<int> mx;
		priority_queue<int,vector<int>,greater<int>> mn;
		int q=0;
		int x=0;
		cin>>n>>k;
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
			x+=a[i];
			mn.push(a[i]);
			mx.push(a[i]);
		}
		x/=n;
		bool p=1;
		while(1)
		{
			int a1=mn.top(),a2=mx.top();
			mx.pop(),mn.pop();
			if(pd(a1,a2))
			{
				cout<<"Draw"<<endl;
				p=0;
				break;
			}
			q^=1;
			if(a1==a2&&a1==x)
				break;
			mn.push(a1+k);
			mx.push(a2-k);
		}
		if(p)
			cout<<c[q]<<endl;
	}
	return 0;
}
