#include<stdio.h>
#include<stdlib.h>
int fun(int n,int m)
{
	int i,t;
	t=1;
	for(i=1;i<=n;i++)
	{
		t=t*i;
	}
	for(i=1;i<=n-m;i++)
	{
		t=t/i;
	}
	return t;
}
int main()
{
	printf("%d",fun(5,2));
}
