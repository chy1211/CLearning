#include<stdio.h>
#include<stdlib.h>

int step=1;
int hanoi(int a,int b,int c,int n)
{	
	if(n==1)
	{
		printf("%d: �h�@�ӽL�l��%d��%d\n",step++,a,c);
	}
	else
	{
		hanoi(a,c,b,n-1);
		printf("%d: �h�@�ӽL�l��%d��%d\n",step++,a,c);
		hanoi(b,a,c,n-1);
	} 
}
int main()
{
	hanoi(1,2,3,5);	
} 
