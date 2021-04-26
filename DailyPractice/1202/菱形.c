#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
    	printf(" ");
	}
	for(j=1;j<=i*2-1;j++)
	{
		printf("*");
	}
	printf("\n");
  }
  for(i=n-1;i>=1;i--)
  {
  	for(j=1;j<=n-i;j++)
  	{
  	  printf(" ");	
	}
	for(j=i*2-1;j>=1;j--)
	{
		printf("*");
	}
	printf("\n");
  }
}
int main()
{
	fun(8);
}
