#include <bits/stdc++.h>
using namespace std;

#define T 200
string s;
int maxn,minn,cun;
int a[T],cnt,p[T];
bool b[T]={1,1},st;

void ou(int x)
{
	for(int i=2;i<=x;++i)
	{
		if(b[i]==0)
		{
			cnt++;
			a[cnt]=i;
		}
		for(int j=1;i*a[j]<=x&&j<=cnt;++j)
		{
			b[i*a[j]]=1;
			if(i%a[j]==0)
				break;
		}
	}
}

int main()
{
	cin>>s;
	ou(s.length());
	for(int i=0;i<s.length();++i)
		p[s[i]-'a']++;
	sort(p,p+26);
	while(p[cun]==0)
		cun++;
	cun++;
	maxn=p[25];
	minn=p[cun];
	for(int i=1;i<=cnt;++i)
		if(maxn-minn==a[i])
		{
			cout<<"Lucky Word"<<endl<<maxn-minn;
			return 0;
		}
	cout<<"No Answer"<<endl<<"0";
	return 0;
}
