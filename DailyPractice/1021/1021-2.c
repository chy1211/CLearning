#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,count;
    count=0;
    for (i=2000;i<=3000;i++)
    {
    	if((i%400==0)||(i%4==0&&i%100!=0))
    	{
    		printf("%d\n",i);
    		count++;
		}
	}
	printf("¦@%d­Ó¶|¦~",count);
}
