#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=2e5+9;
int n;
vector<int> a;
int ans;

int main()
{
    tb;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    if(a.size()<2)
    {
        cout<<-1<<'\n';
        return 0;
    }
    ans=max(a[(int)a.size()-2-1],a[(int)a.size()-1]%a[(int)a.size()-1-1]);
    cout<<ans<<'\n';
    return 0;
}