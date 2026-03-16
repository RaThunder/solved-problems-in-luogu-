#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=3e3+9;
int n,m;
vector<int> g[N];
int p[N];
int op[N];
unordered_set<int> G;
int sz[N],rt;
bool flag[N];

int root(int x)
{
    return p[x]=(p[x]==x?x:root(p[x]));
}

int main()
{
    tb;
    cin>>n>>m;
    for(int i=1;i<=m;++i)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;++i)
    {
        p[i]=i;
        sz[i]=1;
    }
    for(int i=1;i<=n;++i)
        cin>>op[i];
    for(int i=n;i>=1;--i)
    {
        int x=op[i];
        G.insert(x);
        for(const auto y:g[x])
            if(G.count(y))
            {
                int rx=root(x),ry=root(y);
                if(rx==ry)
                    continue;
                if(rx<ry)
                    swap(rx,ry);
                p[rx]=ry;
                sz[ry]+=sz[rx];
            }
        flag[i]=(sz[root(*G.begin())]==(int)G.size());
    }
    for(int i=1;i<=n;++i)
        cout<<(flag[i]?"YES":"NO")<<'\n';
    return 0;
}