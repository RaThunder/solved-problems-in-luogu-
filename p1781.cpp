//究极无敌抽象高精度排序
/*#include <bits/stdc++.h>
using namespace std;

#define M 105
string s;
int a[21][M],len1[21],len2[21],b[21][M],chu[21][M],c[21];
int cnt,n,shu,len;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>s;
		len1[i]=s.length();
		len2[i]=len1[i];
		for(int j=0;j<len1[i];++j)
			a[i][j]=s[j]-'0';
	}
	sort(len2,len2+n);
	for(int i=0;i<n;++i)
		if(len1[i]==len2[n-1])
		{
			for(int j=0;j<len2[n-1];++j)
				b[cnt][j]=a[i][j];
			cnt++;
		}//按数比较
	shu=1;
	len=len2[n-1];
	int z=n;
	while(cnt!=1||shu==len)
	{
		cnt=0;
		for(int i=0;i<z;++i)
			c[i]=b[i][shu-1];
		sort(c,c+z);
		for(int i=0;i<z;++i)
			if(b[i][shu-1]==c[z-1])
			{
				for(int j=0;j<len;++j)
					chu[cnt][j]=b[i][j];
				cnt++;
			}
		z=cnt;
		for(int i=0;i<z;++i)
			for(int j=0;j<len;++j)
				b[i][j]=chu[i][j];
	}//按位比较
	int upp=0;
	for(int i=0;i<n;++i)
		if(len1[i]==len)
		{
			for(int j=0;j<len;++j)
			{
				if(a[i][j]==b[0][j])
					upp++;
				else
					break;
			}
			if(upp==len)
			{
				cout<<i+1<<endl;
				break;
			}
		}//判断是第几个
	for(int i=0;i<len;++i)
		cout<<b[0][i];
	return 0;
}*/
//然而上面这些代码在数的位数比较大的时候会TLE

#include <bits/stdc++.h>
using namespace std;

string s1,s2;
int cnt,n;

bool cmp(string a,string b)
{
	if(a.length()==b.length())
		return a>b?1:0;
	else
		return a.length()>b.length()?1:0;
}

void tongbu()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int main()
{
	tongbu();
	cin>>n;
	n--;
	cin>>s1;
	for(int i=1;i<=n;++i)
	{
		cin>>s2;
		if(cmp(s1,s2)==0)
		{
			s1=s2;
			cnt=i+1;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<s1.length();++i)
		cout<<s1[i];
	return 0;
}
