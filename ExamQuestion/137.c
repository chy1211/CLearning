#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return fun(n-1)+fun(n-1)+1;
	}
}
int main()
{
	int a;
	a=fun(5);
	printf("%d",a);
}
