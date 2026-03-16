#include <bits/stdc++.h>
using namespace std;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;
const int N=2e3+9;

int n,m;
int a[N][N];
int stk[N],top;
int f[N][N];
int p;
bool vis[N][N];
int ans,len[N];

void solve()
{
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(a[i][j]==1)
                f[i][j]=f[i][j-1]+1;
            else
                f[i][j]=0;
        }
    }
    for(int j=1;j<=m;++j)
    {
        for(int i=1;i<=n;++i)
        {
            int last = stk[top];
            while(f[stk[top]][j]>=f[i][j] && top > 0)
            {
                ans=max(ans,f[stk[top]][j]*(last-stk[top-1]));
                top--;
            }
            stk[++top]=i;
        }
        while(top)
        {
            ans=max(ans,f[stk[top]][j]*(n-stk[top-1]));
            top--;
        }
    }
}

int main()
{
    tb;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
        {
            char s;
            cin>>s;
            if(s=='F')
                a[i][j]=1;
        }
    solve();
    cout<<3*ans;
    return 0;
}