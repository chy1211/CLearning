#include <stdio.h>
#include <stdlib.h>
int main()
{
	float height,weight,BMI;
	printf("請輸入身高(cm)體重(kg)，將計算BMI並給予建議。\n");
	scanf("%f",&height);
    scanf("%f",&weight);
    BMI=weight/(height*height)*10000;
    if(BMI<18.5)
    {
    	printf("\n太輕喔!!該增重了!!\n");
	}
	else if(BMI>24.0)
	{
		printf("\n該減肥了喔!!\n");
	}
	else
	{
		printf("\n標準喔!!請繼續維持!\n");
	}
	system("pause");
} 
