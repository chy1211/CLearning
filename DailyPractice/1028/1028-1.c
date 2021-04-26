#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,flags;
    for (i=1;i<=100;i++)
    {
    	flags=0;
    	for(n=1;n<=i;n++)
    	{
    		if(i%n==0)
    		{
    			flags=flags+1;
			}
		}
		if(flags==2)
			{
				printf("%d¬O½è¼Æ\n",i);
			}
	}
	system("pause");
    return 0;       
}
