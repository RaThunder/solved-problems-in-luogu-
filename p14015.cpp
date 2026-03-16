#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=5e5+9;
int t;
string s;
int a[N];
int n;
int cnt[5];

int main()
{
    tb;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<=2;++i)
            cnt[i]=0;
        cin>>s;
        for(int i=0;i<(int)s.length();++i)
            a[i+1]=s[i]-'0';
        n=(int)s.length();
        for(int i=1;i<=n;i+=2)
            if(a[i]!=2)
                a[i]^=1;
        for(int i=1;i<=n;++i)
            cnt[a[i]]++;
        if(cnt[2]<abs(cnt[1]-cnt[0]))
            cout<<abs(cnt[0]-cnt[1])-cnt[2]<<'\n';
        else
            cout<<(cnt[2]-abs(cnt[0]-cnt[1]))%2<<'\n';
    }
    return 0;
}