#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,output;
	printf("數列 1*2, 2*3, 3*4 , 4*5, 5*6, 6*7,... \n");
	printf("請輸入一整數n，將輸出該數列前n項之和。\n");
	scanf("%d",&n);
	output=1;
	for(i=1;i<=n;i++)
	{
		output=output+i*(i+1);
	}
	printf("%d\n",output);
	system("pause");
}
