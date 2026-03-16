#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

long long a,b;

int main()
{
    tb;
    cin>>a>>b;
    if(a==1)
    {
        cout<<1;
        return 0;
    }
    int p=a;
    for(int i=2;i<=b;++i)
    {
        a*=p;
        if(a>inf)
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<a;
    return 0;
}