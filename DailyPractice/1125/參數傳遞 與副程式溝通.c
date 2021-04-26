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
	printf("%d\n",s);
}
int main()
{
	fun(3);
}
