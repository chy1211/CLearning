#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,flag;
    printf("請輸入一數，將檢查是否為質數。\n\n");
    flag=0; //旗標 
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            flag=1;
        }
    }
    printf("\nN=%d\n",n);
    if(flag==0)
    {
    	printf("\n%d是質數\n",n);
	}
	else
	{
		printf("\n%d不是質數\n",n);
	}
}
