#include <bits/stdc++.h>
using namespace std;

/*int n,a[41][41],x,y,k=0,t=1;

int main()
{
	
	cin>>n;
	x=1,y=n/2+1;
	for(int i=1;i<=n*n;++i)
	{
		k++;
		a[x][y]=k;
		t++;
		if(t>3)
		{
			t=1;
			if(x<n)
				x++;
			else
				x=1;
		}
		if(x>1&&y<n)
		{
			x--;
			y++;
		}
		else if(x==1&&y<n)
		{
			x=n;
			y++;
		}
		else if(x>1&&y==n)
		{
			x--;
			y=1;
		}
		else if(x==1&&y==n)
		{
			x=n;
			y=1;
		}
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}*/
//реж╥
int n,a[41][41],h,l;
int main(){
	cin>>n;
	a[0][n/2]=1,h=0,l=n/2;
	for(int i=2;i<=n*n;i++)
	{
		if(h==0&&l!=n-1)
			a[n-1][l+1]=i,h=n-1,l++;
		else if(l==n-1&&h!=0)
			a[h-1][0]=i,h--,l=0;
		else if(h==0&&l==n-1)
			a[h+1][l]=i,h++;
		else if(h!=0&&l!=n-1)
		{
			if(a[h-1][l+1]==0&&h-1>=0&&l+1<=n)
				a[h-1][l+1]=i,h--,l++;
			else
				a[h+1][l]=i,h++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
