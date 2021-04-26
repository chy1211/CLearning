#include<stdio.h>
#include<stdlib.h>
int fun(int a,int b)
{
	int n,i,k,h;
	h=0;
	for(n=a;n<=b;n++)
	{
		k=0;
		for(i=1;i<n;i++)
		{
		  if(n%i==0)
		  {
			k=k+i;
		  }
		}
		if(n==k)
		{
		  printf("%d\n",n);
		  h++;
		}
	}
	return h;
}
int main()
{
	printf("%d",fun(1,10000));
}
