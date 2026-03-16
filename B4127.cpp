#include<bits/stdc++.h>
using namespace std;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=2e9;
const int N=55;

int a[N][N];

bool cmp(int x,int y)
{
    return x>y;
}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin>>a[i][j];
    while(k--)
    {
        int maxx=-inf,minn=inf,c[51]={0},cnt=0,cnt2=0,d[2501]={0};
        long long b[N];
        for (int i=1;i<=m;i++)
        {
            int num=0;
            for (int j=1;j<=n;j++)
                num+=a[j][i];
            b[i]=num;
            minn=min(minn,num);
            maxx=max(maxx,num);
        }
        for (int i=1;i<=m;i++)
            if (b[i]==maxx or b[i]==minn)
                c[++cnt]=i;
        for (int i=1;i<=cnt;i++)
            for (int j=1;j<=n;j++)
                d[++cnt2]=a[j][c[i]];
        sort(d+1,d+cnt2+1,cmp);
        for (int i=1,cnt3=1;i<=n;i++)
        {
            if (i%2==1)
                for (int j=1;j<=cnt;j++)
                    a[i][c[j]]=d[cnt3++];
            else
                for (int j=cnt;j>0;j--)
                    a[i][c[j]]=d[cnt3++];
        }
    }
    for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
	}
    return 0;
}