#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,a,b,sum;
     a=2;
     b=8;
     i=0;
     sum=0;
     
	 for (i=a;i<=b;i++)
     {
	    if (i%2==0)
	    {
	    	sum=sum+i;
		}
	   }
     printf("%d%",sum);
     
     system("pause");
}
