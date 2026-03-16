#include <bits/stdc++.h>
using namespace std;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;
const int N=1e5+9;

int n;
struct node
{
    int x,y;
}p[N];
int d;

bool cmp(node a,node b)
{
    return (a.y==b.y?a.x<b.x:a.y<b.y);
}

bool check(int mid)
{
    int res=0;
    
}

int main()
{
    tb;
    cin>>n>>d;
    for(int i=1;i<=n;++i)
        cin>>p[i].x>>p[i].y;
    sort(p+1,p+1+n,cmp);
    int l=0,r=1000001;
    while(l<=r)
    {
        int mid=(l+r)>>1;
        if(check(mid))
            l=mid+1;
        else
            r=mid-1;
    }
    cout<<l<<' '<<r<<'\n';
    return 0;
}