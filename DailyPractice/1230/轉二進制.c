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
	int n;
	printf("�п�J�n��2�i���\n");
	scanf("%d",&n);
	fun(n);
	printf("\n");	
	system("pause");
}

