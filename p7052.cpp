#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

string s;
string ans;
int flag;

int main()
{
    tb;
    cin>>s;
    for(int i=0;i<(int)s.length();++i)
    {
        if(s[i]=='-')
            flag=1;
        else if(flag==1)
            flag=2;
        else if(flag==2)
        {
            while(i<(int)s.length()&&s[i]=='0')
            {
                ans+='+';
                ans+=s[i];
                ++i;
            }
            i--;
            if(isdigit(s[i]))
                ans+='+';
            flag=0;
        }
        ans+=s[i];
    }
    cout<<ans;
    return 0;
}