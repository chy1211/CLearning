#include <stdio.h>
#include <stdlib.h>
int fun(int a,int b,int c)
{
	int n;
	n=0;
	while(!((n%a==2)&&(n%b==b-1)&&(n%c==c-2)))
	{
		n++;
	}
	return n;
}
int main()
{
	int ans,a,b,c;
	printf("請輸入a,b,c\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	ans=fun(a,b,c);
	printf("盤中最少有%d個豌豆\n",ans);
	system("pause");
}
