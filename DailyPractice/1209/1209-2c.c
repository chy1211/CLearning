#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int a; 
	a=0;
	do
	{
		if(n%10==8)
		{
			a++;
		}
		n=n/10;
	}while(n!=0);
	return a;
}
int main()
{
	int n;
	printf("請輸入一個小於65536的整數,將輸出有幾個8。\n");
	scanf("%d",&n);
	printf("%d個",fun(n));
	system("pause");
}
