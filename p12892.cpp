#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int MX=1e9+5e8;
long long L;

long long f(int x)
{
    return (1ll*x*(x+1))/2;
}

bool check(int mid)
{
    return f(mid)>=L;
}

int main()
{
    tb;
    cin>>L;
    if(L==0)
    {
        cout<<0;
        return 0;
    }
    long long l=0,r=MX;
    long long mid;
    while(l<=r)
    {
        mid=(l+r)>>1;
        if(check(mid))
            r=mid-1;
        else
            l=mid+1;
    }
    while(f(l)%2!=L%2)
        l++;
    cout<<l;
    return 0;
}