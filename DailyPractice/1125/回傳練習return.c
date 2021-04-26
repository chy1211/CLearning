#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int i,s;
	s=0;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
    return s;
}
int main()
{
	int a;
	a=fun(3);
	printf("%d",a);
}
