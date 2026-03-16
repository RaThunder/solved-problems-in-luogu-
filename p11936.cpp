#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e6+9;
int n;
int t[N];
int c1,c2;

int main()
{
    tb;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int a;
        cin>>a;
        if((a&1)==1)
            c1++;
        else
            c2++;
        t[a]++;
    }
    int p;
    if(c1>c2)
        p=1;
    else
        p=2;
    do
    {
        if(!t[p])
        {
            cout<<p;
            break;
        }
    }
    while(p+=2);
    return 0;
}