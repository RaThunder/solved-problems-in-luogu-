#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e4+9;
int n,m;
vector<int> g[N],dag[N];
int dfn[N],low[N],cnt;
int stk[N],top;
int scccnt;
bitset<N> instk;
int id[N],sz[N];
int vis[N];
vector<int> ans;

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

void DAG(int x)
{
    for(const auto &y:g[x])
        if(id[y]!=id[x])
            dag[id[x]].push_back(id[y]);
}

int main()
{
    tb;
    cin>>n>>m;
    for(int i=1;i<=m;++i)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)
            g[a].push_back(b);
    }
    for(int i=1;i<=n;++i)
        if(!dfn[i])
            tarjan(i);
    for(int i=1;i<=n;++i)
        DAG(i);
    for(int i=1;i<=scccnt;++i)
        if(dag[i].size()==0)
            ans.push_back(sz[i]);
    cout<<(ans.size()==1?ans[0]:0);
    return 0;
}