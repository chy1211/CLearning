#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int amountb,ramounta;
	float amounta;
	printf("滿百95折，滿千9折，滿萬85折。\n");
	printf("請輸入一消費額，將輸出需付金額。\n");
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
	printf("需付金額為%f元\n",amounta);
	ramounta=round(amounta);
	printf("四捨五入後為%d元\n",ramounta);
	system("pause");
}
