#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e6+9;
int p,a,b,c,d,n;
double pr[N];
double ans;

int main()
{
    tb;
    cin>>p>>a>>b>>c>>d>>n;
    for(int i=1;i<=n;i++)
		pr[i]=p*(sin(a*i+b)+cos(c*i+d)+2);
	int maxi=1;
	for(int i=2;i<=n;i++){
		if(pr[maxi]<pr[i])maxi=i;
		else ans=max(ans,pr[maxi]-pr[i]);
	}
    if(ans<=0)
        cout<<0;
    else
        printf("%.8lf",ans);
    return 0;
}