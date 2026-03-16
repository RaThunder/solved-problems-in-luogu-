#include <bits/stdc++.h>
using namespace std;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;
const int N=5e5+9;

int n;
int d,k;
struct node
{
    int x,s;
}a[N];
int ans;
int res;
int dp[N];

bool check(int mid)
{
    res=-inf;
    for(int i=0;i<=n;++i)
        dp[i]=-inf;
    dp[0]=0;
    for(int i=1;i<=n;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(a[i].x-a[j].x>=d-mid&&a[i].x-a[j].x<=d+mid)
				dp[i]=max(dp[i],dp[j]+a[i].s);
        }
    }
    for(int i=1;i<=n;++i)
        res=max(res,dp[i]);
    return res<k;
}

int main()
{
    tb;
    cin>>n>>d>>k;
    for(int i=1;i<=n;++i)
        cin>>a[i].x>>a[i].s;
    int l=0,r=inf;
    while(l<=r)
    {
        int mid=(l+r)>>1;
        if(check(mid))
            l=mid+1;
        else
            r=mid-1;
    }
    if(l>=inf)
        l=-1;
    cout<<l;
    return 0;
}