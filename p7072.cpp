#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=609;
int n,w;
int a;
int t[N];
int p;

int main()
{
    tb;
    cin>>n>>w;
    for(int i=1;i<=n;++i)
    {
        cin>>a;
        t[a]++;
        p=max(1,i*w/100);
        for(int j=600;j>=0;--j)
        {
            if(p<=t[j])
            {
                cout<<j<<' ';
                break;
            }
            p-=t[j];
        }
            
                
    }
    return 0;
}