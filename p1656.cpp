#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=155;
int n,m;
vector<int> g[N];
int dfn[N],low[N],cnt;
set<pair<int,int>> ans;
set<pair<int,int>> vis;

void tarjan(int x,int fa)
{
    dfn[x]=low[x]=++cnt;
    for(const auto &y:g[x])
    {
        if(!dfn[y])
        {
            tarjan(y,x);
            low[x]=min(low[x],low[y]);
            if(low[y]>dfn[x])
                ans.insert({min(x,y),max(x,y)});
        }
        else if(y!=fa)
            low[x]=min(low[x],dfn[y]);
    }
}

int main()
{
    tb;
    cin>>n>>m;
    for(int i=1,a,b;i<=m;++i)
    {
        cin>>a>>b;
        if(a!=b&&!vis.count({min(a,b),max(a,b)}))
        {
            g[a].push_back(b);
            g[b].push_back(a);
            vis.insert({min(a,b),max(a,b)});
        }
    }
    for(int i=1;i<=n;++i)
        if(!dfn[i])
            tarjan(i,0);
    for(const auto &t:ans)
        cout<<t.first<<' '<<t.second<<'\n';
    return 0;
}