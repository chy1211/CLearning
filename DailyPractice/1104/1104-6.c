#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	i=1;
	while((i%7!=3)||(i%9!=4)||(i%10!=2)||(i%11!=1))
	{
		i++;
	}
	printf("%d¤H\n",i);
	system("pause");
}
