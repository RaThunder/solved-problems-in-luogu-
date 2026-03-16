#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e5+9;
int n;
int s,a[N];

int main()
{
    tb;
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;++i)
    {
        if(s>=a[i])
            s++;
        else
            s--;
    }
    cout<<s<<' ';
    s=0;
    for(int i=n;i>=1;--i)
    {
        if(s>=a[i])
            s++;
        else
            s--;
    }
    cout<<s<<'\n';
    return 0;
}