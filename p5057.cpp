#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n,m;
int t[N<<2];//把t当lz用，在用到最后叶子的时候lz和t就会等价,同时采取只下方不合成的做法，因为父亲只会被一次异或影响

inline void pushdown(const int &x)
{
	if(t[x]==1)
	{
		t[x<<1]^=1;
		t[x<<1|1]^=1;
		t[x]=0;
	}
}

inline void update(const int &l,const int &r,const int &s,const int &e,const int &x)
{
	if(l<=s&&e<=r)
	{
		t[x]^=1;
		return ;
	}
	pushdown(x);
	int mid=(s+e)>>1;
	if(mid>=l)
		update(l,r,s,mid,x<<1);
	if(mid+1<=r)
		update(l,r,mid+1,e,x<<1|1);
}

inline int query(const int &p,const int &s,const int &e,const int &x)
{
	if(s==e)
		return t[x];
	pushdown(x);
	int mid=(s+e)>>1;
	if(mid>=p)
		return query(p,s,mid,x<<1);
	if(mid<p)
		return query(p,mid+1,e,x<<1|1);
}

signed main()
{
	tb;
	cin>>n>>m;
	while(m--)
	{
		int op;
		cin>>op;
		if(op==1)
		{
			int l,r;
			cin>>l>>r;
			update(l,r,1,n,1);
		}
		else
		{
			int i;
			cin>>i;
			cout<<query(i,1,n,1)<<endl;
		}
	}
	return 0;
}
