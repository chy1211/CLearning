#include<stdio.h>
#include<stdlib.h>
int fun(int n,int m)
{
	if(m==0)
	{
		return 1;
	}
	else
	{
		return n*fun(n-1,m-1);
	}
}
int main()
{
	int a;
	a=fun(5,2);
	printf("%d",a);
}
