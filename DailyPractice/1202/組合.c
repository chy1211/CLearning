#include<stdio.h>
#include<stdlib.h>
int fun(int n,int m)
{
	int i,t,s;
	t=1;s=1;
	for(i=1;i<=n;i++)
	{
		t=t*i;
	}
	for(i=1;i<=m;i++)
	{
		s=s*i;
	}
	for(i=1;i<=n-m;i++)
	{
		t=t/i;
	}
	t=t/s;
	return t;
}
int main()
{
	printf("%d",fun(3,2));
}
