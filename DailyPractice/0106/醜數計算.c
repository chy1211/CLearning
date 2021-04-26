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
		printf("%d琌拎计\n",a);
		s++;
	}
	else
	{
		printf("%dぃ琌拎计\n",a);
		h++;
	}
	printf("%d拎计\n",s);
	printf("%dぃ琌拎计\n",h);
}
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		fun(i);
	}
}
