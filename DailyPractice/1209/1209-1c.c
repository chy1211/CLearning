#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int s,i,a,j;
    s=0;i=0;//剪刀=1 石頭=2 布=3
    while(s<n&&i<n)
    {
	    a=rand()%3+1;
	    j=rand()%3+1;
	    if((a==2&&j==1)||(a==1&&j==3)||(a==3&&j==2))
	    {
		    s++;
		    printf("甲出%d乙出%d 甲贏\n",a,j);
		}
	   if((a==2&&j==3)||(a==3&&j==1)||(a==1&&j==2))
		{
			i++;
			printf("甲出%d乙出%d 乙贏\n",a,j);
		}
		if(a==j)
		{
			printf("平手\n");
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
	int a,n;
	printf("請輸入要猜幾次拳。\n");
	scanf("%d",&n);
	a=fun(n);
	if(a==1)
	{
		printf("甲勝");
	}
	else
	{
		printf("乙勝");
	}
	system("pause");
}
