#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int N=1e5+9;
int n,m,ans,d[N],pos;

signed main()
{
	tb;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>d[i];
	d[++n]=0;//添加零点
	sort(d+1,d+1+n);
	pos=lower_bound(d+1,d+1+n,0)-d;		
	for(int l=pos,r=n;l>=1;l--)
	{//左走
		if(d[pos]-d[l]>m) 
			break;
		while(r>pos&&2*(d[pos]-d[l])+d[r]-d[pos]>m)
			r--;//直接枚举往左固定，往右最远能走到哪
		ans=max(ans,r-l+1);
	}
	for(int l=1,r=pos;r<=n;r++)
	{//右走
		if(d[r]-d[pos]>m)
			break;
		while(l<pos&&2*(d[r]-d[pos])+d[pos]-d[l]>m)
			l++;
		ans=max(ans,r-l+1);
	}
	cout<<ans-1;//减掉新加的点
	return 0;
}
