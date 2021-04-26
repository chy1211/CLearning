#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int i,a;
	a=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			a++;
		}	
	}
	return a;
}
int main()
{
	int s;
	s=fun(6);
	printf("%d",s);
}
