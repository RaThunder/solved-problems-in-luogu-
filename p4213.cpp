#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=2e6+9;
int t,n;
long long s1[N],s2[N];
map<int,long long> ans1,ans2;
bool vis[N];
int pri[N],cnt;
int phi[N],mu[N];

void getprime()
{
    vis[0]=1;
    vis[1]=1;
    phi[1]=1;
    mu[1]=1;
    for(int i=2;i<N-1;++i)
    {
        if(!vis[i])
        {
            pri[++cnt]=i;
            phi[i]=i-1;
            mu[i]=-1;
        }
        for(int j=1;j<=cnt&&i*pri[j]<N-1;++j)
        {
            vis[i*pri[j]]=1;
            if(i%pri[j]==0)
            {
                mu[i*pri[j]]=0;
                phi[i*pri[j]]=phi[i]*pri[j];
                break;
            }
            mu[i*pri[j]]=-mu[i];
            phi[i*pri[j]]=phi[i]*phi[pri[j]];
        }
    }
}

long long getmu(int x)
{
    if(x<N-2)
        return s2[x];
    if(ans2.count(x))
        return ans2[x];
    long long res=1;
    for(int l=2,r=-1;l<=x&&r<=x;l=r+1)
    {
        r=(x/(x/l));
        res-=1ll*(r-l+1)*getmu(x/l);
    }
    return ans2[x]=res;
}

long long getphi(int x)
{
    if(x<N-2)
        return s1[x];
    if(ans1.count(x))
        return ans1[x];
    long long res=(1ll*x*(x+1)/2);
    for(int l=2,r=-1;l<=x&&r<=x;l=r+1)
    {
        r=(x/(x/l));
        res-=1ll*(r-l+1)*getphi(x/l);
    }
    return ans1[x]=res;
}

void init()
{
    getprime();
    for(int i=1;i<N;++i)
    {
        s1[i]=s1[i-1]+phi[i];
        s2[i]=s2[i-1]+mu[i];
    }
}

signed main()
{
    tb;
    cin>>t;
    init();
    while(t--)
    {
        cin>>n;
        cout<<getphi(n)<<' '<<getmu(n)<<'\n';
    }
    return 0;
}