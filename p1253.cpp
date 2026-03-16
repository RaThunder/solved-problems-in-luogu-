#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e6+9;
int n,a[N],q;
long long t[N<<2],lzp[N<<2],lz[N<<2];
int l,r,k;

inline void pushup(const int &x)
{
	t[x]=max(t[x<<1],t[x<<1|1]);
}

inline void build(const int &s,const int &e,const int &x)
{
	lzp[x]=inf;
	if(s==e)
	{
		t[x]=a[s];
		return ;
	}
	int mid=(s+e)>>1;
	build(s,mid,x<<1);
	build(mid+1,e,x<<1|1);
	pushup(x);
}

inline void pushdown(const int &op,const int &s,const int &e,const int &x)
{
	int ls=x<<1,rs=x<<1|1;
	if(op==1&&lzp[x]!=inf)
	{
		t[ls]=lzp[x];
		lzp[ls]=lzp[x];
		t[rs]=lzp[x];
		lzp[rs]=lzp[x];
		lz[ls]=0;
		lz[rs]=0;
		lzp[x]=inf;
	}
	if(op==2&&lz[x]!=0)
	{
		t[ls]+=lz[x];
		lz[ls]+=lz[x];
		t[rs]+=lz[x];
		lz[rs]+=lz[x];
		lz[x]=0;
	}
	
}

inline void update(const int &l,const int &r,const int &v,const int &op,const int &s,const int &e,const int &x)
{
	if(l<=s&&e<=r)
	{
		if(op==1)
		{
			t[x]=v;
			lzp[x]=v;
			lz[x]=0;
		}
		else
		{
			t[x]+=v;
			lz[x]+=v;
		}
		return ;
	}
	pushdown(1,s,e,x);
	pushdown(2,s,e,x);
	int mid=(s+e)>>1;
	if(mid>=l)
		update(l,r,k,op,s,mid,x<<1);
	if(mid+1<=r)
		update(l,r,k,op,mid+1,e,x<<1|1);
	pushup(x);
}

inline long long query(const int &l,const int &r,const int &s,const int &e,const int &x)
{
	if(l<=s&&e<=r)
		return t[x];
	pushdown(1,s,e,x);
	pushdown(2,s,e,x);
	int mid=(s+e)>>1;
	long long res=-inf;
	if(mid>=l)
		res=max(res,query(l,r,s,mid,x<<1));
	if(mid+1<=r)
		res=max(res,query(l,r,mid+1,e,x<<1|1));
	return res;
}

signed main()
{
	tb;
	cin>>n>>q;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	build(1,n,1);
	while(q--)
	{
		int op;
		cin>>op;
		if(op==1)
		{
			cin>>l>>r>>k;
			update(l,r,k,op,1,n,1);
		}
		else if(op==2)
		{
			cin>>l>>r>>k;
			update(l,r,k,op,1,n,1);
		}
		else
		{
			cin>>l>>r;
			cout<<query(l,r,1,n,1)<<endl;
		}
	}
	return 0;
}
