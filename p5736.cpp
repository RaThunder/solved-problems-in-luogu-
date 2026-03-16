//本题应该可以用欧筛和试除两种解法，但我就用欧筛（傲娇 
#include <bits/stdc++.h>
using namespace std;

#define M 100000
int n;
long long a[M],cnt,zhi[M],cns[M];
bool b[M];

void ou(long long x)
{
	memset(b,0,M-1);
	b[1]=1;
	b[0]=1;
	for(int i=2;i<=x;++i)
	{
		if(b[i]==0)
		{
			zhi[cnt]=i;
			cnt++;
		}
		for(int j=0;i*zhi[j]<=x&&j<cnt;++j)
		{
			b[i*zhi[j]]=1;
			if(i%zhi[j]==0)
				break;
		}	
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		cns[i]=a[i];
	}
	sort(a,a+n);
	ou(a[n-1]);
	for(int i=0;i<n;++i)
	{
		int j=0;
		while(cns[i]>=zhi[j])
		{
			if(cns[i]==zhi[j])
			{
				cout<<cns[i]<<" ";
				break;
			}
			j++;
			if(j>cnt)
				break;
		}
	}
	cout;//事实证明这是成立的
	return 0;
}
