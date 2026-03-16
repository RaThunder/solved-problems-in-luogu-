#include <bits/stdc++.h>
using namespace std;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;
const int N=5e2+9;

int n,m;
char c[N][N];
int d[N][N];
bool vis[N][N];
struct node
{
    int x,y;
};
deque<node> dq;
long long ans;

bool inbox(int x,int y)
{
    return x>=1&&x<=n&&y>=1&&y<=m;
}

void update(int x,int y,int dx,int dy,int w)
{

}

void bfs(int x,int y)
{
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            d[i][j]=inf;
    d[x][y]=0;
    vis[x][y]=1;
    dq.push_back({x,y});
    while(!dq.empty())
    {
        int x=dq.front().x;
        int y=dq.front().y;
        dq.pop_front();
        if(vis[x][y])
            continue;
        vis[x][y]=1;
        if(c[x][y]=='\\')
        {
            if(c[x][y+1]=='/')
                update(x,y+1,);
            else
                update(x,y+1,);
        }
    }
}

int main()
{
    tb;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            cin>>c[i][j];
    if((m+n)&1==1)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    bfs(1,1);
    cout<<ans;
    return 0;
}