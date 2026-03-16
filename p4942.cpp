#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const long long inf=2e18;

const int N=1e2+9;
int q;
long long l,r;
long long p;
long long s1[N],len1,s2[N],len2;

signed main()
{
	tb;
	cin>>q;
	while(q--)
	{
		memset(s1,0,sizeof(s1));
		memset(s2,0,sizeof(s2));
		len1=0;
		len2=0;
		cin>>l>>r;
		p=r-l+1;
		while(l)
		{
			s1[++len1]=l%10;
			l/=10;
		}
		while(r)
		{
			s2[++len2]=r%10;
			r/=10;
		}
		for(int i=1;i<=len2;++i)
			s2[i]+=s1[i];
		for(int i=1;i<=len2;++i)
			if(s2[i]>=10)
			{
				s2[i+1]+=s2[i]/10;
				s2[i]%=10;
				if(i==len2)
					len2++;
			}
		for(int i=1;i<=len2;++i)
			s2[i]*=p;
		for(int i=1;i<=len2;++i)
			if(s2[i]>=10)
			{
				s2[i+1]+=s2[i]/10;
				s2[i]%=10;
				if(i==len2)
					len2++;
			}
		for(int i=len2;i>=1;--i)
		{
			s2[i-1]+=10*(s2[i]%2);
			s2[i]/=2;
		}
//		for(int i=1;i<=len2;++i)
//			cout<<s2[i];
		for(int i=len2;i>=2;--i)
			s2[i-1]+=10*(s2[i]%9);
		cout<<s2[1]%9<<endl;
	}
	return 0;
}
