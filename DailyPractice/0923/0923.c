#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int a,b,c;
	i=10;
	b=8;
	c=6;
	a=b*c;
	
	printf("%d",i); //使用"%d" dexcimal 表示十進制
	printf("a=%d,b=%d \n",a,b); //"a=%d,b=%d \n" <--雙引號內為字串 
	printf("%d %d %d",c,b,a); //%d 依序對應後面宣告的值 
	system("pause");	
}
