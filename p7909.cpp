#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

int n,l,r;
int ans;

int main()
{
    tb;
    cin>>n>>l>>r;
    if(l==r)
        ans=l%n;
    else if(r-l>=n)
        ans=n-1;
    else
    {
        l%=n;
        r%=n;
        if(l<r)
            ans=r;
        else
            ans=n-1;
    }
    cout<<ans<<'\n';
    return 0;
}