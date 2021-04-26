#include <stdio.h>
#include <stdlib.h>
int fun(int y)
{
	int x,z,t1,t2;
	t1=0,t2=0;
	do
	{
		x=0;
		x=rand()%2+1;
		if(x==1)
		{
			t1+=1;
			printf("正面\n");	
		}
		else
		{
			t2+=1;
			printf("反面\n");	
		} 
		z=z+1;
	}while(z<y);
	return t1;
	
}
int main()
{
	int y,t1,t2;
	t1=0,t2=0;
	printf("請輸入要骰幾次\n");
	scanf("%d",&y);
	t1=fun(y);
	t2=y-t1;
	printf("\n正面%d次,反面%d次",t1,t2);
}

