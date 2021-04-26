#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,sum;
	sum=0;i=1;
	while(i<=10)
	{
		sum=sum+i;
		i++;
		printf("%d\n",sum);
	}
	printf("%d\n",sum);
	system("pause");
}
