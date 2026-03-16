#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	int q,qn,a1,b1;
	cin>>q;
	cin>>a;
	for(int i=1;i<=q;++i)
	{
		cin>>qn;
		if(qn==1)
		{
			cin>>b;
			a+=b;
			cout<<a<<endl;
			//也可以用strcat(char a,char b);，将b拼到a后面 
		}
		else if(qn==2)
		{
			cin>>a1>>b1;
			a.erase(0,a1);
			a.erase(b1,105);
			cout<<a<<endl;
		}
		else if(qn==3)
		{
			cin>>a1;
			cin>>b;
			a.insert(a1,b);
			cout<<a<<endl;
		}
		else
		{
			cin>>b;
			if(a.find(b)<a.size())//a.find函数如果找不到会返回string::npos 
				cout<<a.find(b)<<endl;
			else
				cout<<-1<<endl;
		}
	}
	return 0;
}
