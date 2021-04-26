#include <stdio.h>
#include <stdlib.h>

float fun(float total,float rate,int year)
{
	int i;
	i=0;
	do
	{
		total=total*(1+rate);
		i++;
	}while(i<year);
	return total;
}
int main()
{
	printf("%f",fun(9870,0.08,10));
}
