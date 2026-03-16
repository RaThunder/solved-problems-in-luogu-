#include <bits/stdc++.h>
using namespace std;

int n,x,y;
char ss[20],ans[100],k;
int main()
{
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>ss;
		if(isalpha(ss[0]))
		{
			k=ss[0];
			scanf("%d%d",&x,&y);
		}
		else
		{
			x=atoi(ss);
			scanf("%d",&y);
		}
		if(k=='a')
			sprintf(ans,"%d+%d=%d",x,y,x+y);
		else if(k=='b')
			sprintf(ans,"%d-%d=%d",x,y,x-y);
		else
			sprintf(ans,"%d*%d=%d",x,y,x*y);
		printf("%s\n%d\n",ans,strlen(ans));
	}
	return 0;
}
//#include <cctype>
//这是一个拥有许多字符串处理函数声明的头文件，这些函数可以用来对单独字符串进行分类和转换；
//例如：
//isalpha():检查这个字符是否为字母，真返回1，假返回0；
//isalnum()：检查这个字符是否为字母或数字数字，同上；
//isdigit():检查这个字符是否为十进制数字，同上；
//islower():检查这个字符是否为小写字母，同上；
