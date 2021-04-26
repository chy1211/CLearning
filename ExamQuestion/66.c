#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,i,s,g,m,z;
	s=1,g=1,m=0,z=0;
	printf("請輸入兩整數N、M，將輸出輸出排列數 P(N,M)=N!/(N-M)!\n");
	scanf("%d",&a);
	scanf("%d",&i);
	z=a-i;
	for(a=a;a>=1;a--)
	{
		s=s*a;
	}
	for(z=z;z>=1;z--)
	{
		g=g*z;
	}
	m=s/g;
	printf("\nAns=%d\n",m);
	system("pause");
}
