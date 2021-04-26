#include<stdio.h>
#include<stdlib.h>
int fun(int k)
{
	int i,s;
	s=0;
	for(i=1;i<=k;i++)
	{
		if(k%i==0)
		{
			s++;
		}
	}
	return s;//64
}
int main()
{
	int k,max,index;
	max=0;index=0;
	for(k=1;k<=10000;k++)
	{
		if(fun(k)>=max)
		{
			max=fun(k);
			index=k;//9240
		}
	}
	printf("%d\n%d",index,max);
}
