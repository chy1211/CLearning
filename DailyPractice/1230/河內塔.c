#include<stdio.h>
#include<stdlib.h>
int s=1;
int fun(int a,int b,int c,int n)
{
	if(n==1)
	{
		printf("%d: 搬一個盤子由%d到%d\n",s++,a,c);
	}
	else
	{
		fun(a,c,b,n-1);
		printf("%d: 搬一個盤子由%d到%d\n",s++,a,c); 
		fun(b,a,c,n-1);
	}
}
int main()
{
	fun(1,2,3,5);
}
