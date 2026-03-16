#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

int n;
int ans,p;
int cnt;
bool flag;

int main()
{
    tb;
    cin>>n;
    int i=1;
    while(n)
    {
        ans++;
        if(!flag&&(n-1)%3==0)
        {
            cnt=i;
            flag=1;
        }
        p=(n-1)/3+1;
        n-=p;
        ++i;
    }
    cout<<ans<<' '<<cnt<<'\n';
    return 0;
}