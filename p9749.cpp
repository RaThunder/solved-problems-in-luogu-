#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e5+9;
int n;
int a[N];
int v[N];
int d;
long long now;
int mn;
long long ans;

int getceil(int q,int p)
{
    return (q+p-1)/p;
}

int main()
{
    tb;
    cin>>n>>d;
    for(int i=2;i<=n;++i)
        cin>>v[i];
    for(int i=1;i<=n;++i)
        cin>>a[i];
    mn=a[1];
    for(int i=2;i<=n;++i)
    {
        if(now<v[i])
        {
            ans+=mn*getceil(v[i]-now,d);
            now=getceil(v[i]-now,d)*d+now-v[i];
        }
        else
            now-=v[i];
        mn=min(mn,a[i]);
    }
    cout<<ans;
    return 0;
}