#include<stdio.h>
#include<stdlib.h>
int fun(int n,int m)
{
	int i;
	int total;
	for(i=1;i<=n;i++)
	{
		total=total*i;
	}
	for(i=1;i<=n-m;i++)
	{
		total=total/i;
	}
	return total;
}
int main()
{
	printf("%d",fun(5,2));
}
