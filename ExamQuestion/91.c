#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int a,s;
	s=0; 
	if(n<65536)
	{
		while (n>0)
	    {
		a=n%10;
		if(a==8)
		{
			s++;
		}
		n=n/10;	
	    }
	}
	else
	{
		printf("�W�L�d��\n");
	}
	return s;
}
int main()
{
	int a;
	a=fun(28888);
	printf("8�X�{�F%d��",a);
}
