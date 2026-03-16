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
int scc;
vector<int> ans[N];
int id[N];
int out[N];

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
        ++scc;
        while(1)
        {
            int y=stk[top--];
            instk[y]=0;
            id[y]=scc;
            ans[scc].push_back(y);
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
        int u,v;
        cin>>u>>v;
        if(u==v)
            continue;
        g[u].push_back(v);
    }
    for(int i=1;i<=n;++i)
        if(!dfn[i])
            tarjan(i);
    cout<<scc<<'\n';
    for(int i=1;i<=n;++i)
    {
        if(out[id[i]])
            continue;
        out[id[i]]=1;
        sort(ans[id[i]].begin(),ans[id[i]].end());
        for(const auto &y:ans[id[i]])
            cout<<y<<' ';
        cout<<'\n';
    }
    return 0;
}