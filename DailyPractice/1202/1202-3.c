#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row;
	printf("�п�J�n�C�L�����\n"); 
	scanf("%d",&row);
	fun(row);
}
int fun(int row)
{
	int i,j;
	for(i=row;i>0;i--)
	{
		printf("*");
	}
	printf("\n");
	for(i=row-2;i>0;i--)
	{
		printf("*");
		for(j=row-2;j>0;j--)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(i=row;i>0;i--)
	{
		printf("*");
	}
}

