#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

int n,a;
long long ans;
bool flag;

int main()
{
    tb;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a;
        if(n==1)
        {
            cout<<a;
            return 0;
        }
        if(a<2)
        {
            a=2;
            flag=1;
        }
        ans+=a;
    }
    if(flag)
        ans--;
    cout<<ans;
    return 0;
}