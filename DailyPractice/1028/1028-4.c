#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,flags,count;
    count=0;
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
		if(flags>5)
			{
				printf("%d\n",i);
				count=count+1;
			}
	}
	printf("�H�W�@%d�Ӽƪ��]�Ƥj�󤭭�\n",count);
	system("pause");
    return 0;       
}
