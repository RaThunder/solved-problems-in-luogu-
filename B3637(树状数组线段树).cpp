#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=5e3+9;
int n;
int a[N];
vector<int> di;
struct seg
{
    int ls,rs;
    int v,lz;
}t[N<<2];
int tot,rt;
int ans,pans;

void pushup(int x)
{
    t[x].v=max(t[t[x].ls].v,t[t[x].rs].v);
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
    int ls=t[x].ls,rs=t[x].rs;
    t[ls].v=max(t[ls].v,t[x].lz);
    t[ls].lz=max(t[ls].lz,t[x].lz);
    t[rs].v=max(t[rs].v,t[x].lz);
    t[rs].lz=max(t[rs].lz,t[x].lz);
    t[x].lz=0;
}

void update(int l,int r,int k,int s,int e,int &x)
{
    if(!x)
        x=++tot;
    if(l<=s&&e<=r)
    {
        t[x].v=max(t[x].v,k);
        t[x].lz=max(t[x].lz,k);
        return ;
    }
    pushdown(s,e,x);
    int mid=(s+e)>>1;
    if(l<=mid)
        update(l,r,k,s,mid,t[x].ls);
    if(mid<r)
        update(l,r,k,mid+1,e,t[x].rs);
    pushup(x);
}

int query(int l,int r,int s,int e,int x)
{
    if(!x)
        return 0;
    if(l<=s&&e<=r)
        return t[x].v;
    pushdown(s,e,x);
    int res=0;
    int mid=(s+e)>>1;
    if(l<=mid)
        res=max(res,query(l,r,s,mid,t[x].ls));
    if(mid<r)
        res=max(res,query(l,r,mid+1,e,t[x].rs));
    return res;
}

int X(int x)
{
    return lower_bound(di.begin(),di.end(),x)-di.begin()+1;
}

int main()
{
    tb;
    rt=0;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        di.push_back(a[i]);
    }
    sort(di.begin(),di.end());
    di.erase(unique(di.begin(),di.end()),di.end());
    for(int i=1;i<=n;++i)
    {
        int p=X(a[i]);
        pans=query(1,p-1,1,di.size(),rt)+1;
        update(p,p,pans,1,di.size(),rt);
        ans=max(ans,pans);
    }
    cout<<ans;
    return 0;
}