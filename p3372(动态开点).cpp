#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e5+9;
int n,m;
long long a;
struct seg
{
    long long v,lz;
    int ls,rs;
}t[N<<1];
int tot;
int rt;

void pushup(int x)
{
    t[x].v=t[t[x].ls].v+t[t[x].rs].v;
}

void pushdown(int s,int e,int x)
{
    if(!t[x].lz)
        return ;
    if(s==e)
    {
        t[x].lz=0;
        return ;
    }
    if(!t[x].ls)
        t[x].ls=++tot;
    if(!t[x].rs)
        t[x].rs=++tot;
    int mid=(s+e)>>1;
    t[t[x].ls].v+=(mid-s+1)*t[x].lz;
    t[t[x].ls].lz+=t[x].lz;
    t[t[x].rs].v+=(e-mid)*t[x].lz;
    t[t[x].rs].lz+=t[x].lz;
    t[x].lz=0;
}

void update(int l,int r,long long k,int s,int e,int &x)
{
    if(!x)
        x=++tot;
    if(l<=s&&e<=r)
    {
        t[x].v+=(e-s+1)*k;
        t[x].lz+=k;
        return ;
    }
    pushdown(s,e,x);
    int mid=(s+e)>>1;
    if(l<=mid)
        update(l,r,k,s,mid,t[x].ls);
    if(mid+1<=r)
        update(l,r,k,mid+1,e,t[x].rs);
    pushup(x);
}

long long query(int l,int r,int s,int e,int x)
{
    if(!x)
        return 0;
    if(l<=s&&e<=r)
        return t[x].v;
    pushdown(s,e,x);
    int mid=(s+e)>>1;
    long long res=0;
    if(l<=mid)
        res+=query(l,r,s,mid,t[x].ls);
    if(mid+1<=r)
        res+=query(l,r,mid+1,e,t[x].rs);
    return res;
}

int main()
{
    tb;
    cin>>n>>m;
    rt=0;
    for(int i=1;i<=n;++i)
    {
        cin>>a;
        update(i,i,a,1,n,rt);
    }
    while(m--)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            int x,y;
            long long k;
            cin>>x>>y>>k;
            update(x,y,k,1,n,rt);
        }
        else
        {
            int x,y;
            cin>>x>>y;
            cout<<query(x,y,1,n,rt)<<'\n';
        }
    }
    return 0;
}