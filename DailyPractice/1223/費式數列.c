#include<stdio.h>
#include<stdlib.h>
int count;//公用(有)變數 
int fun(int n)
{
    count++;
	printf("fun(%d)\n",n);
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return fun(n-1)+fun(n-2);
	}
}
int main()
{
   int a;
   a=fun(5);
   printf("%d\n",a);
   printf("出現%d次fun",count);
}
