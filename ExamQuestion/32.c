#include <stdio.h>
#include <stdlib.h>
int main()
{
	float height,weight,BMI;
	printf("�п�J����(cm)�魫(kg)�A�N�p��BMI�õ�����ĳ�C\n");
	scanf("%f",&height);
    scanf("%f",&weight);
    BMI=weight/(height*height)*10000;
    if(BMI<18.5)
    {
    	printf("\n�ӻ���!!�ӼW���F!!\n");
	}
	else if(BMI>24.0)
	{
		printf("\n�Ӵ�ΤF��!!\n");
	}
	else
	{
		printf("\n�зǳ�!!���~�����!\n");
	}
	system("pause");
} 
