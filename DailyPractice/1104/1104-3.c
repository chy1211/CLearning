#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,temp;
	printf("�п�J���a,b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	while(b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("�̤j���]�Ƭ�%d\n",a);
	system("pause");
}
