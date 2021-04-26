#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int a,i,h,g;
	h=0;g=0;
	while(n>0)
	{
		a=n%10;
		if(a==1)
		{
			h++;
		}
		else
		{
			g++;
		}
		n=n/10;	
	}
	printf("%d %d\n",h,g);
	if(h>g)
	{
		return 1;
	}
	if(g>h)
	{
		return 2;
	}
	if(g==h)
	{
		return 3;
	}
}
int main()
{
	int a;
	a=fun(1100110);
	if(a==1)
	{
		printf("1比較多");
	}
	if(a==2)
	{
		printf("0比較多"); 
	}
	if(a==3)
	{
		printf("一樣多");
	}
}
