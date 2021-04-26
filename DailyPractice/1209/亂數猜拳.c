#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int s,i,a,j;
    s=0;i=0;//∞≈§M=1 •€¿Y=2 •¨=3 
    while(s<n&&i<n)
    {
    	a=rand()%3+1;
    	j=rand()%3+1;
    	if((a==2&&j==1)||(a==1&&j==3)||(a==3&&j==2))
    	{
    		s++;
    		printf("•“•X%d§A•X%d •“ƒπ\n",a,j);
		}
	    if((a==2&&j==3)||(a==3&&j==1)||(a==1&&j==2))
		{
			i++;
			printf("•“•X%d§A•X%d §Aƒπ\n",a,j);
		}
		if(a==j)
		{
			printf("•≠§‚\n");
		}
	}
	if(s>i)
	{
		return 1;
	}
	if(i>s)
	{
		return 2;
	}
}
int main()
{
	int a;
	a=fun(11);
	if(a==1)
	{
		printf("•“≥”");
	}
	else
	{
		printf("§A≥”");
	}
}


