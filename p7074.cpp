#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e3+9;
int n,m;
int a[N][N];
long long dp[N][N][5];

int main()
{
    tb;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            cin>>a[i][j];
    for(int i=0;i<=n+2;++i)
        for(int j=0;j<=m+2;++j)
            for(int k=1;k<=3;++k)
                dp[i][j][k]=-inf;
    for(int i=1;i<=3;++i)
        dp[1][1][i]=a[1][1];
    for(int j=1;j<=m;++j)
    {
        for(int i=1;i<=n;++i)
            dp[i][j][1]=max(max(dp[i][j-1][1],dp[i][j-1][2]),dp[i][j-1][3])+a[i][j];
        for(int i=2;i<=n;++i)
            dp[i][j][2]=max(dp[i-1][j][1],dp[i-1][j][2])+a[i][j];
        for(int i=n-1;i>=1;--i)
            dp[i][j][3]=max(dp[i+1][j][1],dp[i+1][j][3])+a[i][j];
    }
    cout<<max(max(dp[n][m][1],dp[n][m][2]),dp[n][m][3])<<'\n';
    return 0;
}