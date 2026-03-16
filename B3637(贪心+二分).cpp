#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

int n;
vector<int> t;

int main()
{
    tb;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int a;
        cin>>a;
        auto p=lower_bound(t.begin(),t.end(),a);
        if(p==t.end())
            t.push_back(a);
        else
            *p=a;//迭代器直接指向元素
    }
    cout<<t.size();
    return 0;
}