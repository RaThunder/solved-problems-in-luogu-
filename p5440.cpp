#include<bits/stdc++.h>
using namespace std;
#define size 100000005
#define int long long
#define tb ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int prime[size]={0};
bool mark[size]={0};
bool day30[]={0,0,1,0,1,0,1,0,0,1,0,1};
int t,sum=0,i,j,day,month,year;
string s;

bool xyq(int a)
{
    if(a%400==0||a%100!=0&&a%4==0)
        return true;
    return false;
}

signed main()
{
	tb;
    cin>>t;
    for(i=2;i<=size;i++)
	{
        if(!mark[i])
            prime[sum++]=i;
        for(j=0;j<sum&&i*prime[j]<=size;j++)
		{
            mark[i*prime[j]]=1;
            if(i%prime[j]==0)
			break;
        }
    }
    sum=0;
    for(i=1;i<=t;i++)
	{
        cin>>s;
        sum=0;
        for(day=2;day<=31;day++)
		{
            if(mark[day])
                continue;
            if((s[6]!='-')&&(day/10!=s[6]-'0')||(s[7]!='-')&&(day%10!=s[7]-'0'))
                continue;
            for(month=1;month<=12;month++)
			{
                if(mark[month*100+day])
                    continue;
                if(day30[month]&&day==31)
                    continue;
                if((s[4]!='-')&&(month/10!=s[4]-'0')||(s[5]!='-')&&(month%10!=s[5]-'0'))
                    continue;
                for(year=1;year<=9999;year++)
				{
                    if(mark[year*10000+month*100+day])
                        continue;
                    if((!xyq(year))&&month==2&&day==29)
                        continue;
                    if((s[0]!='-')&&(year/1000!=s[0]-'0')||(s[1]!='-')&&(year/100%10!=s[1]-'0')||(s[2]!='-')&&(year/10%10!=s[2]-'0')||(s[3]!='-')&&(year%10!=s[3]-'0'))
                        continue;
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
