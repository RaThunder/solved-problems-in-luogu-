#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=5e3+9;
int n,m,p;
string s[]={"Yes","No"};
int pre[N];

int root(int x)
{
	return pre[x]=(pre[x]==x?x:root(pre[x]));
}

signed main()
{
	tb();
	cin>>n>>m>>p;
	for(int i=1;i<=n;++i)
		pre[i]=i;
	while(m--)
	{
		int mi,mj;
		cin>>mi>>mj;
		pre[root(mi)]=root(mj);
	}
	while(p--)
	{
		int pi,pj;
		cin>>pi>>pj;
		cout<<(root(pi)==root(pj)?s[0]:s[1])<<endl;	
	}
	return 0;
}
