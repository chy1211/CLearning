#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int a,b,s,h;
	a=n;
	while(n%2==0)
	{
		n=n/2;
	}
	while(n%3==0)
	{
		n=n/3;
	}
	while(n%5==0)
	{
		n=n/5;
	}
	if(n==1)
	{
		printf("%d是醜數\n",a);
		s++;
	}
	else
	{
		printf("%d不是醜數\n",a);
		h++;
	}
	printf("共%d個醜數\n",s);
	printf("共%d個不是醜數\n",h);
}
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		fun(i);
	}
}
