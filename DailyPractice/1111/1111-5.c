#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,i;
	for(i=1;i<=10;i++)
	{
		a=rand()%6+1;
		printf("%d\n",a);
	}
	system("pause");
}

