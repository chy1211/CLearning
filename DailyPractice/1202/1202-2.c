#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row;
	printf("請輸入要列印的行數\n"); 
	scanf("%d",&row);
	fun(row);
}
int fun(int row)
{
	int i,j,s;
	for(i=1;i<=row;i++)
	{
		for(s=1;s<=row-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*"); 
		}
		printf("\n");
	}
	for(i=row-1;i>0;i--)
	{
		for(s=row-i;s>0;s--)
		{
			printf(" ");
		}
		for(j=(2*i-1);j>0;j--)
		{
			printf("*"); 
		}
		printf("\n");
	}
}

