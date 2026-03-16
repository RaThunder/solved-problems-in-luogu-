#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;
const long long P=998244353;

const int N=5e6+9;
int t,mx;
int n,m; 
int fac[N],infac[N];
long long ans;

int qmi(long long x,int q)
{
    long long res=1;
    while(q)
    {
        if(q&1)
            res*=x;
        res%=P;
        x*=x;
        x%=P;
        q>>=1;
    }
    return (int)res;
}

void init()
{
    fac[0]=1;
    for(int i=1;i<=mx;++i)
        fac[i]=1ll*i*fac[i-1]%P;
    infac[mx]=qmi(fac[mx],P-2);
    for(int i=mx-1;i>=0;--i)
        infac[i]=1ll*infac[i+1]*(i+1)%P;
}

int c(int k,int q)//m,n
{
    return (int)(1ll*fac[q]*infac[k]%P*infac[q-k]%P);
}

int main()
{
    tb;
    cin>>t>>mx;
    init();
    while(t--)
    {
        cin>>n>>m;
        ans^=c(m,n);
    }
    cout<<ans;
    return 0;
}