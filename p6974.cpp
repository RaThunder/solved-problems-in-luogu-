#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e6+9;
int n,q;
int m;
char c;
bool vr[N],vc[N];
long long cr,cc;
long long sr,sc;

int main()
{
    tb;
    cin>>n>>q;
    cr=cc=n;
    sr=sc=1ll*n*(n+1)/2;
    while(q--)
    {
        cin>>c>>m;
        if(c=='R')
        {
            if(vr[m])
            {
                cout<<0<<'\n';
                continue;
            }
            cout<<sc+m*cc<<'\n';
            sr-=m;
            cr--;
            vr[m]=1;
        }
        else
        {
            if(vc[m])
            {
                cout<<0<<'\n';
                continue;
            }
            cout<<sr+m*cr<<'\n';
            sc-=m;
            cc--;
            vc[m]=1;
        }
    }
    return 0;
}