#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e4+9;
int n,m;
vector<int> g[N];
int dfn[N],low[N],cnt;
int stk[N],top;
bitset<N> instk;
int scccnt,sz[N],id[N];
int ans;

void tarjan(int x)
{
    dfn[x]=low[x]=++cnt;
    stk[++top]=x;
    instk[x]=1;
    for(const auto &y:g[x])
    {
        if(!dfn[y])
        {
            tarjan(y);
            low[x]=min(low[x],low[y]);
        }
        else if(instk[y])
            low[x]=min(low[x],dfn[y]);
    }
    if(dfn[x]==low[x])
    {
        scccnt++;
        while(1)
        {
            int y=stk[top--];
            instk[y]=0;
            id[y]=scccnt;
            sz[id[y]]++;
            if(x==y)
                break;
        }
    }
}

int main()
{
    tb;
    cin>>n>>m;
    for(int i=1;i<=m;++i)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }
    for(int i=1;i<=n;++i)
        if(!dfn[i])
            tarjan(i);
    for(int i=1;i<=scccnt;++i)
        if(sz[i]>1)
            ans++;
    cout<<ans;
    return 0;
}