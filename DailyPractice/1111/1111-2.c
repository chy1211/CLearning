#include <stdio.h>
#include <stdlib.h>
int main()
{
	int os,is,ans;
	os=1,is=1;
	while(os<=9)
	{
		is=1;
		do
		{
			ans=os*is;
			printf("%d X %d = %d\n",os,is,ans);
			is++;
		}while(is<=9);
		os++;
	}
	system("pause");
}

