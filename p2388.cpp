#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

int n;
long long ans;
int sum;

int main()
{
    tb;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int p=i;
        while(p%5==0)
        {
            sum++;
            p/=5;
        }
        ans+=sum;
    }
    cout<<ans;
    return 0;
}