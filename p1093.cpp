#include <bits/stdc++.h>
using namespace std;
#define int long long

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

const int N=3e2+9;
int n;

struct s
{
	int id;
	int a,b,c;
	int sum;
}st[N];

bool cmp(s x,s y)
{
	if(x.sum!=y.sum)
		return x.sum>y.sum;
	else
	{
		if(x.a!=y.a)
			return x.a>y.a;
		else
			return x.id<y.id;
	}
}

signed main()
{
	cin>>n;
	for(int i=0;i<n;++i)
	{
		st[i].id=i;
		cin>>st[i].a>>st[i].b>>st[i].c;
		st[i].sum=st[i].a+st[i].b+st[i].c;
	}
	sort(st,st+n,cmp);
	for(int i=0;i<5;++i)
		cout<<st[i].id+1<<" "<<st[i].sum<<endl;
	return 0;
}
