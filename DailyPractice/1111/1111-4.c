#include <stdio.h>
#include <stdlib.h>
int main()
{
	float peoup;
	int peo,year;
	printf("�п�J�H�f,�ΤH�f�����v(0.X),�N��ܦh�֦~��,�H�f�|�W�L30000�H�C\n");
	scanf("%d",&peo);
	scanf("%f",&peoup);
	year=0;
	do
	{
		peo=peo*(1+peoup);
		year=year+1;
		printf("��%d�~,�H�f��%d�H\n",year,peo);
	}while(peo<30000);
	printf("%d�~��,�H�f�|�W�L30000�H�C\n",year);
	system("pause");
}
