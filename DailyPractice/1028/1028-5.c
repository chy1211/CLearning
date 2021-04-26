#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chi,she;
    for (chi=0;chi<=50;chi++)
    {
    	for(she=0;she<=30;she++)
    	{
    		
    		if(chi*2+she*4==100)
    		{
    			printf("雞%d隻,羊%d隻時,腳的個數等於100\n",chi,she);
			}
			
		}
	}  
}
