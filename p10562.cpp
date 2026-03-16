#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

#define mp 1.000000
long double a,b;
long double k;
long double yl,yr,c;
long long ans;

//直线方程bx+ay=ab;

int main()
{
    tb;
    cin>>a>>b;
    yl=mp*b;
    for(int x=1;x<=(int)a;++x)
    {
        yr=mp*(a-mp*x)*b/a;
        c=mp*(yr+yl)/(2.0*mp);
        ans+=(ll)round(c);
        yl=yr;
    }
    cout<<ans;
    return 0;
}