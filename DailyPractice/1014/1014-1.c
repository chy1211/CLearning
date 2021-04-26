#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,result;
 result=1;
 for (i=5;i>=1;i--)
{
	printf("i=%d\n",i); //¦L¥X 
	result=result*i;
}
 printf("%d",result);
}
