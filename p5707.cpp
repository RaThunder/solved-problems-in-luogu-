#include <bits/stdc++.h>
using namespace std;

int main()
{
	double s,v;//ceil向上取整后面必须是浮点数 
	cin>>s>>v;
	double p=ceil(s/v)+10;
	const int a=8*60+24*60;
	const int b=a-p;
	const int c=b+20;
	if(b<24*60)
	{
		if(23-(24*60-b)/60<10)
			cout<<"0";
		cout<<23-(24*60-b)/60<<":";
		if(60-(24*60-b)%60<10)
			cout<<"0";
		cout<<60-(24*60-b)%60;
	}
	else
	{
		if((b-24*60)/60<10)
			cout<<"0";
		cout<<(b-24*60)/60<<":";
		if((b-24*60)%60<10)
			cout<<"0";
		cout<<(b-24*60)%60;
	}
	return 0;
}
