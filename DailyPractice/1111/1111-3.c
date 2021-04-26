#include <stdio.h>
#include <stdlib.h>
int main()
{
	float area;
	int flag;
	printf("輸入一浮點數,假設破布面積d,每次將破布撕去一半, 將輸出多少次以後面積會小於0.00001\n");
	scanf("%f",&area);
	flag=0;
	do
	{
		area=area/2.0;
		flag=flag+1;
	}while(area>0.00001);
	printf("%d次後面積會小於0.00001\n",flag);
	system("pause");
}
