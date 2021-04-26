#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,sum;
	i=1,sum=0;
	do
	{
		sum=sum+i;
		printf("%d\n",sum);
		i++;
	}while(i<=10);
	printf("%d\n",sum);
	system("pause");
}
