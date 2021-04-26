#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	if(n==0||n==1)
	{
		printf("%d",n);
	}
	else
	{
        fun(n/2);
		printf("%d",n%2);
	}
}
int main()
{
	int a;
	for(a=0;a<=100;a++)
	{
		fun(a);
		printf("\n");
	}
}
