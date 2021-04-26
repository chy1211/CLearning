#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,temp;
	printf("請輸入兩數a,b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	while(b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("最大公因數為%d\n",a);
	system("pause");
}
