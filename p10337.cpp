#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e5+9;
int n;
int a[N];
bool flag;

int main()
{
    tb;
    int T;
    cin>>T;
    while(T--)
    {
        flag=0;
        cin>>n;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
            if(a[i]!=a[i-1]&&i>1)
                flag=1;
        }
        cout<<(flag?n-1:n)<<'\n';   
    }
    return 0;
}