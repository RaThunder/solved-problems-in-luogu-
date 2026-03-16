#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

int t,n,k;
string s;
int ans;

void check(int x)
{
    string c;
    c.clear();
    for(int i=x;i<x+7;++i)
        c+=s[i];
    if(c=="nanjing")
        ans++;
}

int main()
{
    tb;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>k;
        cin>>s;
        if(n<7)
        {
            cout<<0<<'\n';
            continue;
        }
        for(int i=0;i<min(k,6);++i)
            s+=s[i];
        for(int i=0;i<(int)s.length();++i)
            check(i);
        cout<<ans<<'\n';
    }
    return 0;
}