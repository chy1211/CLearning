#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,n2,n3;
    n=0;
    i=0;
    printf("N N^2 N^3\n---------------\n");
    for (i=0;i<=10;i++)
    {
	    printf("%d  %d  %d\n",n,n2,n3);
		n=n+5;
		n2=n*n;
		n3=n2*n;
		
	}
    
}
