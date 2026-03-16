#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e5+9;
int n,k;
char s[N];
int tok;

bool check(int x){
    int cnt=0;
    for(int i=0;i<n;i++){
        int j=i;
        while(s[j]==s[j-1]&&j<n){j++;
            if(j-i+1==x){
                cnt++;
                break;
            }
            
        }
        i=j;
    }
    return cnt<=k;
}

signed main()
{
	tb;
	cin>>n>>k;
	for(int i=1;i<=n;++i)
		cin>>s[i];
	for(int i=1;i<=n;++i)
		if((s[i]=='N')^(i&1))
			tok++;
	if(tok<=k||n-tok<=k)
	{
		cout<<1;
		return 0;
	}
	int l=2,r=n+1,mid;
	while(l<=r)
	{
		mid=(l+r)>>1;
		if(!check(mid))
			l=mid+1;
		else
			r=mid-1;
	}
	cout<<l<<endl;
	return 0;
}
