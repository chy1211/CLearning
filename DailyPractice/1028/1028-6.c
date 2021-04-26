#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,n,m,z,ans;
	a=1;
	b=1;
	ans=0;
	printf("N個物品挑M個,請輸入N與M。");
	scanf("%d,%d",&n,&m);
	z=n-m;
    for (n=n;n>=1;n--)
    {
    	a=a*n;
	} 
	for(z=z;z>=1;z--)
	{
		b=b*z;
	}
	ans=a/b;
	printf("共有%d種排列",ans);
}
