#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=2e5+9;
int n;
vector<int> g;
int dfn[N],low[N],scc,cnt;
int stk[N],top;
bool instk[N];
int ans[N],res;
bool flag;

void tarjan(int x)
{
    dfn[x]=low[x]=++cnt;
    stk[++top]=x;
    instk[x]=1;
    int y=g[x];
    if(!dfn[y])
    {
        tarjan(y);
        low[x]=min(low[x],low[y]);
    }
    else if(instk[y])
        low[x]=min(low[x],dfn[y]);
    if(dfn[x]==low[x])
    {
        ++scc;
        while(1)
        {
            y=stk[top--];
            instk[y]=0;
            ans[scc]++;
            if(x==y)
                break;
        }
    }
}

int main()
{
    tb;
    g.push_back(inf);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int t;
        cin>>t;
        g.push_back(t);
        if(t==i)
            flag=1;
    }
    if(flag)
    {
        cout<<0<<'\n';
        return 0;
    }
    for(int i=1;i<=n;++i)
        if(!dfn[i])
            tarjan(i);
    res=inf;
    for(int i=1;i<=scc;++i)
        if(ans[i]!=1)
            res=min(res,ans[i]);
    cout<<res<<'\n';
    return 0;
}