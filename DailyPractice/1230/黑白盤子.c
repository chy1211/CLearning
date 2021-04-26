#include<stdio.h>
#include<stdlib.h>
int fun(int a,int b,int c,int n)
{
	if(n==2)
	{
		printf("白盤子從%d搬到%d\n",a,b);
		printf("黑盤子從%d搬到%d\n",a,c);
		printf("白盤子從%d搬到%d\n",b,c);
	}
	else
	{
		fun(a,b,c,n-2);
		printf("搬白盤子從%d到%d\n",a,b); 
		fun(c,a,b,n-2);
		printf("搬黑盤子從%d到%d\n",a,c);
		fun(b,c,a,n-2);
		printf("搬白盤子從%d到%d\n",b,c);
		fun(a,b,c,n-2);
	}
}
int main()
{
	fun(1,2,3,4);
}
