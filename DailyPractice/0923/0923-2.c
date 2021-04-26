#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int a,b,c;
	
	a=82;
	b=10;
	c=a/b; //整數除法（小數部分無條件捨去）
	i=a%b; //%=vb的運算符號MOD 
	
	printf("總共有%d顆蛋(a的值)\n一盒裝%d顆  (b的值)\n可以裝%d盒   (c的值)\n剩下%d顆蛋   (i的值)\n",a,b,c,i); 
	
	system("pause");	
}
