#include<stdio.h>
#include<stdlib.h>
int fun(int a,int b,int c,int n)
{
	if(n==2)
	{
		printf("�սL�l�q%d�h��%d\n",a,b);
		printf("�½L�l�q%d�h��%d\n",a,c);
		printf("�սL�l�q%d�h��%d\n",b,c);
	}
	else
	{
		fun(a,b,c,n-2);
		printf("�h�սL�l�q%d��%d\n",a,b); 
		fun(c,a,b,n-2);
		printf("�h�½L�l�q%d��%d\n",a,c);
		fun(b,c,a,n-2);
		printf("�h�սL�l�q%d��%d\n",b,c);
		fun(a,b,c,n-2);
	}
}
int main()
{
	fun(1,2,3,4);
}
