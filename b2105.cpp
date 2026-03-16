#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e2+9;
int n,m,k;
int a[N][N],b[N][N],c[N][N];

int main()
{
    tb;
    cin>>n>>m>>k;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            cin>>a[i][j];
    for(int i=1;i<=m;++i)
        for(int j=1;j<=k;++j)
            cin>>b[i][j];
    for(int i=1;i<=n;++i)
        for(int j=1;j<=k;++j)
            for(int p=1;p<=m;++p)
                c[i][j]+=a[i][p]*b[p][j];
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=k;++j)
            cout<<c[i][j]<<' ';
        cout<<'\n';
    }
    return 0;
}