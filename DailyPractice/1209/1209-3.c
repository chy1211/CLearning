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
	printf("請輸入一個由0或1組成的整數,將輸出1較多、0較多或一樣多。\n");
	scanf("%d",&n);
	a=fun1(n);
	b=fun2(n);
	if(a>b)
	{
		printf("1較多");
	} 
	else if(a<b)
	{
		printf("0較多");
	} 
	else
	{
		printf("一樣多");
	}
	system("pause");
}
