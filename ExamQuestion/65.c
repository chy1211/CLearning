#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int amountb,ramounta;
	float amounta;
	printf("����95��A���d9��A���U85��C\n");
	printf("�п�J�@���O�B�A�N��X�ݥI���B�C\n");
	scanf("%d",&amountb);
	if(amountb>9999)
	{
		amounta=amountb*0.85;
	}
	else if(amountb>999)
	{
		amounta=amountb*0.9;
	}
	else if(amountb>99)
	{
		amounta=amountb*0.95;
	}
	else
	{
		amounta=amountb;
	}
	printf("�ݥI���B��%f��\n",amounta);
	ramounta=round(amounta);
	printf("�|�ˤ��J�ᬰ%d��\n",ramounta);
	system("pause");
}
