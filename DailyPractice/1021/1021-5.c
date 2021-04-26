#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,sum;
	n=5;
	sum=0;
	for(i=1;i<=n;i++)
	{
	    sum=sum+(2*i-1)*(2*i+1);
	} 
	printf("%d",sum);
}

