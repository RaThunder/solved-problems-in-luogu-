#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int T,q;
long long p;
long long t[N<<2];

inline void pushup(const int x)
{
	t[x]=(t[x<<1]*t[x<<1|1])%p;
}

void build(const int &s,const int &e,const int &x)
{
	if(s==e)
	{
		t[x]=1;
		return ;
	}
	int mid=(s+e)>>1;
	build(s,mid,x<<1);
	build(mid+1,e,x<<1|1);
	pushup(x);
}

inline void update(const int &l,const int &r,const long long &k,const int &s,const int &e,const int &x)
{
	if(l<=s&&e<=r)
	{
		t[x]=k%p;
		return ;
	}
	int mid=(s+e)>>1;
	if(mid>=l)
		update(l,r,k,s,mid,x<<1);
	if(mid+1<=r)
		update(l,r,k,mid+1,e,x<<1|1);
	pushup(x);
}

signed main()
{
	tb;
	cin>>T;
	while(T--)
	{
		cin>>q>>p;
		build(1,q,1);
		for(int i=1;i<=q;++i)
		{
			int op;
			cin>>op;
			if(op==1)
			{
				long long m;
				cin>>m;
				update(i,i,m,1,q,1);
				cout<<t[1]%p;
			}
			else
			{
				int pos;
				cin>>pos;
				update(pos,pos,1,1,q,1);
				cout<<t[1]%p;
			}
			cout<<endl;
		}
	}
	return 0;
}
