#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,count;
	count=0;
	do
	{
	    a=rand()%6+1;
		printf("%d\n",a);
		
		if(a==6)
		{
		count=count+1;
	    }
	}while(count<3);
	system("pause");
}

