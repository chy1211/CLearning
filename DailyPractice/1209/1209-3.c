#include<stdio.h>
#include<stdlib.h>
int fun1(int n)
{
	int a; 
	a=0;
	do
	{
		if(n%10==1)
		{
			a++;
		}
		n=n/10;
	}while(n!=0);
	return a;
}
int fun2(int n)
{
	int b; 
	b=0;
	do
	{
		if(n%10==0)
		{
			b++;
		}
		n=n/10;
	}while(n!=0);
	return b;
}
int main()
{
	int n,a,b;
	printf("�п�J�@�ӥ�0��1�զ������,�N��X1���h�B0���h�Τ@�˦h�C\n");
	scanf("%d",&n);
	a=fun1(n);
	b=fun2(n);
	if(a>b)
	{
		printf("1���h");
	} 
	else if(a<b)
	{
		printf("0���h");
	} 
	else
	{
		printf("�@�˦h");
	}
	system("pause");
}
