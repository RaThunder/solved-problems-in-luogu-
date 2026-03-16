#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    int sum=0;
    getline(cin,a);
    getline(cin,b);
    for (int i=0;i<a.length();++i)
        a[i]=tolower(a[i]);
    for (int i=0;i<b.length();++i)
        b[i]=tolower(b[i]);
    a=' '+a+' ';
    b=' '+b+' ';//在这里加上空格来保证是个单词，而不是一小段
    if(b.find(a)==string::npos)
        cout<<-1<<endl;
    else
	{
    	int lent=b.length();
    	int ans=b.find(a);
    	while(b.find(a)!=string::npos)//a.find函数如果找不到会返回string::npos
    	{
    		b.erase(0,b.find(a)+a.length());
    		b=' '+b+' ';
			//cout<<b<<endl;
    		sum++;
		}
    	cout<<sum<<" "<<ans;
    }
    return 0;
}
