#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,o,output;
	o=1;
	output=0;
	printf("�п�J�@���n \n");
	printf("�N��X 1*n+2*(n-1)+3*(n-2)+4*(n-3)+...+(n-1)*2+n*1\n");
	scanf("%d",&n);
	i=n;
	for(i;i<=n;i--)
	{
		output=output+(o*i);
		o=o+1;
	}
	printf("Ans=%d\n",output);
	system("pause");
}






