#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	printf("fun(%d)\n",n);
	if(n==1)
	{
		return 1;
	}
	else
	{
		return fun(n-1)*n;
	}
}
int main()
{
	int a;
	a=fun(10);
	printf("%d",a);
} 
