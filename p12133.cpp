#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18; 

signed main()
{
	tb;
    int T;
    cin>>T;
    while(T--)
	{
        int a,b,c,k,a1,b1,c1;
        cin>>a>>b>>c>>k;
        for(int i=1;i<=k;i++){
            a1=(b+c)/2;
            b1=(a+c)/2;
            c1=(a+b)/2;
            a=a1;
            b=b1;
            c=c1;
            if(a==b&&b==c)
            	break;
        }
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
    return 0;
}
