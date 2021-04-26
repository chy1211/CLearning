#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,x,count;
	printf("請輸入正整數N，將列出小於該數的所有質數。\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
    {
    	count=0;
    	for(x=1;x<=i;x++)
    	{
    		if(i%x==0)
    		{
    			count=count+1;
			}
		}
		if(count==2)
			{
				printf("%d\n",i);
			}
	}
	system("pause");
}


