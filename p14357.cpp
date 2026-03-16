#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=1e6+9;
string s;
int a[N];
int cnt;

int main()
{
    tb;
    cin>>s;
    for(int i=0;i<s.length();++i)
        if(isdigit(s[i]))
            a[++cnt]=s[i]-'0';
    sort(a+1,a+1+cnt);
    for(int i=cnt;i>=1;--i)
        cout<<a[i];
    cout<<'\n';
    return 0;
}