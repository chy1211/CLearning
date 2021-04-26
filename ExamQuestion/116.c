#include <stdio.h>
#include <stdlib.h>
int fun(int a)
{
	int i,n,j,k,b,c,v;
	i=a/10;
	n=a/5;
	j=a/1;
	k=0;
	for(b=0;b<=i;b++)
	{
		for(c=0;c<=n;c++)
		{
			for(v=0;v<=j;v++)
			{
				if(b*10+c*5+v*1==a)
				{
					printf("10塊%d個,5塊%d個,1塊%d個\n",b,c,v);
					k++;
				}

			}	
		}
	}
   return k;
}
 
int main()
{
	int ans,a;
	printf("輸入金額");
	scanf("%d",&a);
	ans=fun(a);
	printf("%d組",ans);
}
