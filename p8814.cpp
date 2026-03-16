#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

int k;
long long n,e,d;
long long t,delta;

int main()
{
    tb;
    cin>>k;
    while(k--)
    {
        cin>>n>>e>>d;
        t=n-e*d+2;
        delta=t*t-n*4;
        if(delta<0)
            cout<<"NO"<<'\n';
        else if(delta==0)
        {
            if((t&1)==1)
                cout<<"NO"<<'\n';
            else
                cout<<(t>>1)<<' '<<(t>>1)<<'\n';
        }
        else
        {
            long long sd=sqrt(delta);
            if(sd*sd!=delta)
                cout<<"NO"<<'\n';
            else
            {
                int p=t-sd,q=t+sd;
                if((p&1)==1||(q&1)==1)
                    cout<<"NO"<<'\n';
                else
                    cout<<(p>>1)<<' '<<(q>>1)<<'\n';
            }
        }
    }
    return 0;
}