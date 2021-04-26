#include <stdio.h>
#include <stdlib.h>
int main()
{
	float total,rate;
	int year;
	total=10000,rate=0.045,year=0;
	while(total<=100000)
	{
		total=total*(1+rate);
		printf("%f¤¸\n",total);
		year=year+1;
	}
	printf("%d¦~\n",year);
	system("pause");
}
