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
	
	printf("%d",i); //�ϥ�"%d" dexcimal ��ܤQ�i��
	printf("a=%d,b=%d \n",a,b); //"a=%d,b=%d \n" <--���޸������r�� 
	printf("%d %d %d",c,b,a); //%d �̧ǹ����᭱�ŧi���� 
	system("pause");	
}
