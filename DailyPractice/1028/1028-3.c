#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,flags;
    for (i=1;i<=100;i++)
    {
    	flags=0;
		printf("\n%d���]�Ʀ�\n",i);
    	for(n=1;n<=i;n++)
    	{
    		
    		if(i%n==0)
    		{
    			printf("%d\n",n);
    			flags=flags+1;
			}
			
		}
		if(flags>5)
			{
				printf("%d���]�Ƥj�󤭭�!\n",i);
			}
		if(flags<5)
			{
				printf("%d���]�Ƥp�󤭭�!\n",i);
			}	
	}
	
	system("pause");
    return 0;       
}
