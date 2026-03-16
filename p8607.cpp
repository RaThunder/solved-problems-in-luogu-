#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int P=1e9+7;
const int N=1e3+9;
int n;
int dp[6][N];//dp1,2,3,4,5分别为四种走法:从端点出发往回走，不往回走，1+2，从中间出发向左，从中间出发向右。N枚举列号
int sum;

int main()
{
    tb;
    cin>>n;
    if(n==1)
    {
        cout<<2;
        return 0;
    }
    dp[2][1]=1;
    dp[2][2]=2;
    dp[3][1]=1;
    dp[3][2]=6;
    for(int i=3;i<=n;++i)
    {
        dp[1][i]=(1ll*2*dp[3][i-1]+1ll*4*dp[3][i-2])%P;
        dp[2][i]=(1ll*2*dp[2][i-1])%P;
        dp[3][i]=(1ll*dp[1][i]+dp[2][i])%P;
    }
    sum=1ll*4*dp[3][n]%P;
    for(int i=2;i<=n-1;++i)
    {
        dp[4][i]=(1ll*2*dp[2][i]*2*dp[3][n-i])%P;
        dp[5][i]=(1ll*2*dp[2][n-i+1]*2*dp[3][i-1])%P;
    }
    for(int i=1;i<=n;++i)
        sum=(1ll*sum+dp[4][i]+dp[5][i])%P;
    cout<<sum;
    return 0;
}