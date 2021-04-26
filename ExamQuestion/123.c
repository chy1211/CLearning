#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	printf("%d\n",n);
	if(n==1)
	{
		system("pause");
	}
    else if(n%2==0)
	{
		 fun(n/2);
	}
	else if(n%2!=0)
	{
		 fun(3*n+1);
	}
}
int main()
{
  int a;
  a=fun(13);
}
