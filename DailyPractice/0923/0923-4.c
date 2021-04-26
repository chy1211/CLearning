#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x,y; //攝氏轉華氏 x攝氏 y華氏 
	x=60;
	y=x*(9/5.0)+32;// "(9/5.0)"浮點數除法 
	
	printf("若攝氏為%f℃，華氏為%f℉。\n",x,y);
	
	system("pause");
}
 
