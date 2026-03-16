#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
const int inf=1e9;

const int N=1e5;
int n;
struct rec
{
    int x1,x2,y,tag;
}g[N<<1];
struct node
{
    int l,r;
    int cnt;
    int h;
}t[N<<1];
int ls[N<<1],rs[N<<1],rt,tot;
long long ans;

bool cmp(rec a,rec b)
{
    if(a.tag==b.tag)
    {
        if(a.x1==b.x1)
            return a.x2<b.x2;
        return a.x1<b.x1;
    }
    return a.tag<b.tag;
}

void update(int l,int r,int f,int s,int e,int &x)
{
    if(!x)
        x=++tot;
    if(l<=s&&e<=r)
    {
        t[x].tag+=f;
        return ;
    }
    
}


int main()
{
    tb;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        g[i]={x1,x2,y1,1};
        g[i+n]={x1,x2,y2,-1};
    }
    sort(g+1,g+1+(n<<1),cmp);

}