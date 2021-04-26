#include <stdio.h>
#include <stdlib.h>
int main()
{
	float peoup;
	int peo,year;
	printf("請輸入人口,及人口成長率(0.X),將顯示多少年後,人口會超過30000人。\n");
	scanf("%d",&peo);
	scanf("%f",&peoup);
	year=0;
	do
	{
		peo=peo*(1+peoup);
		year=year+1;
		printf("第%d年,人口有%d人\n",year,peo);
	}while(peo<30000);
	printf("%d年後,人口會超過30000人。\n",year);
	system("pause");
}
