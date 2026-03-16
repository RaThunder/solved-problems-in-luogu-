#include <cstdio>
#include <iostream>
using namespace std;

int k, cnt;
int n,c;

extern "C" int Seniorious(int);           // 在这里需要声明一次交互库给出的函数。

extern "C" int Chtholly(int n)            // 在这里实现交互库要求你实现的函数。
{
  int ans=1;
  int l=1,r=n;
  int mid;
  while(l<=r)
  {
    mid=(l+r)>>1;
    if (Seniorious(mid)>=0)
        r=(ans=mid)-1;
    else
        l=mid+1;
  }
  return ans;
}
//这玩意是只能在评测器中使用的，在本地运行会报错