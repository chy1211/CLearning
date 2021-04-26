#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		printf("*");
	}
	printf("\n");
	for(i=1;i<=n-2;i++)
	{
		printf("*");
		for(j=1;j<=n-2;j++)
		{
			printf(" ");
		}
		printf("*");
	    printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		printf("*");
	}
	printf("\n");
}
int main()
{
	fun(8);
}
