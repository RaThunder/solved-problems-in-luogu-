//md这能混AC？？？
//已知正整数n是两个不同的质数的乘积，则n的因数除了1与本身以外只有这两个质数 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    for(int i=2;i<=sqrt(n);++i)
        if(n%i==0)
            cout<<n/i;
    return 0;
}
