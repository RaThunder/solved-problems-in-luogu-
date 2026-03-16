#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int inf=1e9;

const int N=20;
queue<int> q[20];
int n,k,sum;

int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
    {
		int m;
		cin>>m;
		for(int j=1;j<=m;j++)
        {
			int x;
			cin>>x;
			q[i].push(x);
		}
	}
	while(k)
    {
		for(int i=1;i<=n;i++)
        {
			if(k==0)
                break;
			if(q[i].empty())
            {
                sum+=50;
                k--;
            }
			else if(q[i].front()<sum)
                q[i].pop();
			else
            {
                sum+=q[i].front();
                q[i].pop();
                k--;
            }
        }
	}
	cout<<sum;
	return 0;
} 