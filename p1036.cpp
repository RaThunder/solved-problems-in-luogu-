#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=30,M=1e8+1;
int n,k;
int a[N];
int ans;
vector<int> p;
bitset<M> isc;

void euler()
{
    int mx=n*(*max_element(a+1,a+1+n));
    isc[0]=1;
    isc[1]=1;
    int m=mx+1;
    for(int i=2;i<=m;++i)
    {
        if(!isc[i])
            p.push_back(i);
        for(const auto &j:p)
        {
            if(1ll*i*j>m)
                break;
            isc[i*j]=1;
            if(i%j==0)
                break;
        }
    }
}

bool check(int x)
{
    return !isc[x];
}

void dfs(int x,long long sum,int cnt)
{
    if(cnt==k)
    {
        if(check(sum))
            ans++;
        return ;
    }
    for(int i=x+1;i<=n;++i)
        dfs(i,sum+a[i],cnt+1);
}

int main()
{
    tb;
    cin>>n>>k;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    euler();
    dfs(0,0,0);
    cout<<ans;
    return 0;
}