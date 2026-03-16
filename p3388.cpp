#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=2e4+9;
int n,m;
vector<int> g[N];
int dfn[N],low[N],cnt;
set<int> ans;
struct pair_hash
{
    size_t operator()(const pair<int,int> &p)const
    {
        return hash<long long>()(((long long)p.first<<32)^p.second);
    }
};
unordered_set<pair<int,int>,pair_hash> vis;

void tarjan(int x,int fa)
{
    dfn[x]=low[x]=++cnt;
    int child=0;
    for(const auto &y:g[x])
    {
        if(!dfn[y])
        {
            ++child;
            tarjan(y,x);
            low[x]=min(low[x],low[y]);
            if(fa!=0&&low[y]>=dfn[x])
                ans.insert(x);
        }
        else if(y!=fa)
            low[x]=min(low[x],dfn[y]);
    }
    if(fa==0&&child>=2)
        ans.insert(x);
}

int main()
{
    tb;
    cin>>n>>m;
    for(int i=1,x,y;i<=m;++i)
    {
        cin>>x>>y;
        if(x==y)
            continue;
        if(x!=y&&!vis.count({min(x,y),max(x,y)}))
        {
            g[x].push_back(y);
            g[y].push_back(x);
            vis.insert({min(x,y),max(x,y)});
        }
    }
    for(int i=1;i<=n;++i)
        if(!dfn[i])
            tarjan(i,0);
    cout<<ans.size()<<'\n';
    for(const auto &t:ans)
        cout<<t<<' ';
    return 0;
}