#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e4+9;
int n,m;
int a[N],w[N];
vector<int> g[N],dag[N];
int dfn[N],low[N],cnt;
int stk[N],top;
int scc[N],scccnt;
bitset<N> instk;
int id[N];
long long dp[N];
bitset<N> vis;
long long ans;

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
            w[id[y]]+=a[y];
            if(x==y)
                break;
        }
    }
}

void DAG(int x)
{
    for(const auto &y:g[x])
        if(id[x]!=id[y])
            dag[id[x]].push_back(id[y]);
}

long long dfs(int x)
{
    if(vis[x])
        return dp[x];
    vis[x]=1;
    dp[x]=w[x];
    for(const auto &y:dag[x])
        dp[x]=max(dp[x],w[x]+dfs(y));
    return dp[x];
}

int main()
{
    tb;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    for(int i=1;i<=m;++i)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    for(int i=1;i<=n;++i)
        if(!dfn[i])
            tarjan(i);
    for(int i=1;i<=n;++i)
        DAG(i);
    for(int i=1;i<=scccnt;++i)
        ans=max(ans,dfs(i));
    cout<<ans;
    return 0;
}