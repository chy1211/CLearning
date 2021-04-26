#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float sum;
    sum=0;
    i=1;
    while(i<=199)
    {
    	sum=sum+1.0/i;
    	i=i+4;
	}
	i=3;
	while(i<=199)
	{
		sum=sum-1.0/i;
		i=i+4;
	}
	printf("%f",sum);
	system("pause");
}

