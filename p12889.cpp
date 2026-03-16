#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e5+9;
int n,k;
int a;
long long dp[N];
long long sum;

int main()
{
    tb;
    cin>>n>>k;
    for(int i=1;i<=n;++i)
    {
        cin>>a;
        sum+=a;
        dp[i]=max(1ll*a,dp[i-1]+a);
    }
    sort(dp+1,dp+1+n);
    sum+=dp[n]*(k-1);
    cout<<sum;
    return 0;
}