#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int fun(int n)
{
	int count,a,b,c,d,e;
	a=n,b=1,d=0;
	count=0;
	while(a!=0)
	{
		a=a/10;
		count++;
	}
	printf("%d\n",count);
    c=n%10;
    if(c==8)
    	{
    		d++;		
		}
	b=count;
	while(b!=0)
    {
    	e=n/10*(b-1);
    	floor(e);
    	if(e==8)
    	{
    		d++;		
		}
		b--;
		
	}
	printf("%d\n",d);
	return d;
}
int main()
{
	int n;
	printf("�п�J�@�Ӥp��65536�����,�N��X���X��8�C\n");
	scanf("%d",&n);
	printf("%d��",fun(n));
}
