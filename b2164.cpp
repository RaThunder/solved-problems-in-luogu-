#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int P=1e9+7;
const int N=5e3+9;
int n,m;
int fac[N];

int qmi(long long a,int q)
{
    long long res=1;
    while(q)
    {
        if((q&1)==1)
            res*=a;
        res%=P;
        a*=a;
        a%=P;
        q>>=1;
    }
    return (int)res;
}

int inv(int x)
{
    return qmi(x,P-2)%P;
}

int main()
{
    tb;
    cin>>n>>m;
    fac[0]=1;
    for(int i=1;i<=n;++i)
        fac[i]=1ll*fac[i-1]*i%P;
    cout<<1ll*fac[n]*inv(fac[m])%P*inv(fac[n-m])%P;
    return 0;
}