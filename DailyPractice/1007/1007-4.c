#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,sum;
     sum=0;
     
	 for (i=1;i<=10;i++)
     {
	 sum=sum+i;
	 printf("%d%\n",sum);
	   }
     printf("%d%",sum);
     
     system("pause");
}
