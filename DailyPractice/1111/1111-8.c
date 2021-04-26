#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,count1,count2,i;
	count1=0,count2=0,i=1;
	do
	{
	    a=rand()%2;
		if(a==1)
		{
			printf("硬幣擲出反面。\n");
		}
		if(a==0)
		{
			printf("硬幣擲出正面。\n");
		}
		if(a==1)
		{
		count1=count1+1;
	    }
	    if(a==0)
		{
		count2=count2+1;
	    }
	    i++;
	}while(i<=50);
	printf("硬幣擲出正面%d次,擲出反面%d次\n",count2,count1);
	system("pause");
}
