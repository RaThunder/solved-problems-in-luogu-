#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e6+9;
int n,m;
int a[N];
int t[N],b[N];
struct node
{
    int l,r;
    int id;
}g[N];
int ans[N];

int lowbit(int x)
{
    return x&-x;
}

void update(int x,int k)
{
    for(int i=k;i<=n;i+=lowbit(i))
        t[i]+=x;
}

int query(int k)
{
    int res=0;
    for(int i=k;i>=1;i-=lowbit(i))
        res+=t[i];
    return res;
}

bool cmp(node x,node y)
{
    if(x.r==y.r)
        return x.l<y.l;
    return x.r<y.r;
}

int main()
{
    tb;
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;++i)
    {
        cin>>g[i].l>>g[i].r;
        g[i].id=i;
    }
    sort(g+1,g+1+m,cmp);
    for(int i=1,j=1;i<=m;++i)
    {
        for(;j<=g[i].r;++j)
        {
            if(b[a[j]])
                update(-1,b[a[j]]);
            update(1,j);
            b[a[j]]=j;
        }
        ans[g[i].id]=query(g[i].r)-query(g[i].l-1);
    }
    for(int i=1;i<=m;++i)
        cout<<ans[i]<<'\n';
    return 0;
}