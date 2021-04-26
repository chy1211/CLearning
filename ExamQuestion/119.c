#include <stdio.h>
#include <stdlib.h>
int fun(int a,int b)
{
	int i,n,k;
	k=0;
	for(i=a;i<=b;i++)
	{
		if((i%400==0)||(i%4==0&&i%100!=0) )
		{
			printf("%d\n",i);
			k++;
		}
	}
 	return k;
}
int main ()
{
   int ans,a,b;
   printf("輸入西元a到b");
   scanf("%d %d",&a,&b);
   ans=fun(a,b);
   printf("共有%d個閏年",ans);
}

