#include<stdio.h>
#include<stdlib.h>
float fun(int n)
{
	if(n==2)
	{
		return 0.5;
	}
	else
	{
		return fun(n-2)+1.0/(n-1)-1.0/n;
	}
}
int main()
{
  float a;
  a=fun(200);
  printf("%f",a);
}

