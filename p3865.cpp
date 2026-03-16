#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IO ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e5+9;
int n;
int st[N][20];
int lg[N];

void init()
{
    lg[1]=0;
    for(int i=2;i<=n;++i)
        lg[i]=lg[i>>1]+1;
    for(int k=1;k<=lg[n];++k)
        for(int i=1;i<=n-(1<<k)+1;++i)
            st[i][k]=max(st[i][k-1],st[i+(1<<(k-1))][k-1]);
}

int main()
{
    IO;
    int T;
    cin>>n>>T;
    for(int i=1;i<=n;++i)
        cin>>st[i][0];
    init();
    while(T--)
    {
        int l,r;
        cin>>l>>r;
        int k=lg[r-l+1];
        cout<<max(st[l][k],st[r-(1<<k)+1][k])<<'\n';
    }
    return 0;
}