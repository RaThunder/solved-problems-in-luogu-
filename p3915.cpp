#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e5+9;
int t;
int n,k;
vector<int> g[N];
int sz[N],cnt;

void dfs(int x,int fa)
{
    sz[x]=1;
    for(const auto &y:g[x])
        if(y!=fa)
        {
            dfs(y,x);
            sz[x]+=sz[y];
        }
    if(sz[x]==k)
    {
        cnt++;
        sz[x]=0;
    }
}

int main()
{
    tb;
    cin>>t;
    while(t--)
    {
        for(int i=1;i<=n;++i)
            g[i].clear();
        cnt=0;
        cin>>n>>k;
        for(int i=1;i<n;++i)
        {
            int x,y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        if(n%k!=0)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        dfs(1,0);
        if(cnt!=n/k)
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
    }
    return 0;
}