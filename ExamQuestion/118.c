#include <stdio.h>
#include <stdlib.h>
int fun(float a ,float b ,float c)
{
	int y;
	y=1;
	do
	{
		a=a*(1+b);
		y++;
	}while(a<c);
	return y;
}
int main()
{
	int ans;
	float a,b,c;
	printf("請輸入存入a元利率是b,如果每年的利息都繼續存入銀行,即複利,將輸出幾年後本金+利息可超過c元。\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	ans=fun(a,b,c);
	printf("%d年後本金+利息會超過%f元\n",ans,c);
	system("pause");
}
