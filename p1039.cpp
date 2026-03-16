#include <bits/stdc++.h>
using namespace std;

string da[10]={ "Today is Monday",
			"Today is Tuesday",
			"Today is Wednesday",
			"Today is Thursday",
			"Today is Friday",
			"Today is Saturday",
			"Today is Sunday"};
struct nm
{
	string nam;
}id[25];
struct sa
{
	int iduse;
	string say;
}said[105];
int m,n,p;
int cnt,possi,ti;

bool tr(int x)
{
	return x==1?1:0;
}

void tb()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

void ptin()//?
{
	bool pda=0;
	int q=0;
	while(1)
	{
		cin>>nm[q];
		for(int i=1;i<=sa.nm[q];++i)
		{
			if(sa[i].nm[q]==' ')
			{
				pda=1;
				break;
			}
			else if(sa[i].nm[q]=='\r')
				q++;
		}
			
		if(pda==1)
			break;
	}
}

int main()
{
	cin>>m>>n>>p;
}
