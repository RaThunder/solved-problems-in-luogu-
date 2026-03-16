#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;
const int N=5e6+9;

int n,p,k;
int a[N];
int fac[N],ifac[N],inv[N];
long long ans;

int in()
{
    int k=0,f=1;
    char c=getchar();
    while(c<'0'||c>'9')
    {
        if(c=='-')f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9')k=k*10+c-'0',c=getchar();
    return k*f;
}

long long qmi(long long x,int q)
{
    long long res=1;
    while(q)
    {
        if(q&1)
            res*=x;
        res%=p;
        x*=x;
        x%=p;
        q>>=1;
    }
    return res%p;
}

void init()
{
    fac[0]=1;
    for(int i=1;i<=n;++i)
        fac[i]=1ll*a[i]*fac[i-1]%p;
    ifac[n]=qmi(fac[n],p-2);
    for(int i=n-1;i>=0;--i)
        ifac[i]=1ll*ifac[i+1]*a[i+1]%p;
    for(int i=1;i<=n;++i)
        inv[i]=1ll*ifac[i]*fac[i-1]%p;
}

int main()
{
    // tb;
    scanf("%d%d%d",&n,&p,&k);
    for(int i=1;i<=n;++i)
        a[i]=in();
    init();
    int pos=k;
    for(int i=1;i<=n;++i)
    {
        ans=(ans+1ll*k*inv[i]%p)%p;
        k=1ll*k*pos%p;
    }
    printf("%lld",ans);
    return 0;
}