#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float sum;
    sum=0;
    for(i=1;i<=199;i=i+4)
    {
    	sum=sum+1.0/i;
	}
	for(i=3;i<=199;i=i+4)
	{
		sum=sum-1.0/i;
	}
	printf("%f",sum);
}

