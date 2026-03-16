#include <bits/stdc++.h>
using namespace std;

#define N 1000000
char a[N];
int w,l,p,i;

int main()
{
	while(1)
	{
		cin>>a[i];
		if(a[i]=='E')
			break;
		i++;
	}
	i=0;
	while(1)
	{
		if(a[i]=='W')
			w++;
		else if(a[i]=='L')
			l++;
		else
		{
			printf("%d:%d\n",w,l);
			break;
		}
		if(w>=l+2||l>=w+2)
			if(w>=11||l>=11)
			{
				printf("%d:%d\n",w,l);
				w=0;
				l=0;
			}
		p++;
		i++;
	}
	i=0;
	w=0;
	l=0;
	cout<<endl;
	while(p>=0)
	{
		if(a[i]=='W')
			w++;
		else if(a[i]=='L')
			l++;
		else
		{
			printf("%d:%d",w,l);
			break;
		}
		if(w>=l+2||l>=w+2)
			if(w>=21||l>=21)
			{
				printf("%d:%d\n",w,l);
				w=0;
				l=0;
			}
		p++;
		i++;
	}
	return 0;
}
