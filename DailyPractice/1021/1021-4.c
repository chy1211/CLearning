#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b,c,i,j;
    a=1.0;
    b=0.0;
    c=0.0;
    for (i=1;i<=199;i=i+4)
    {
		b=b+(1/i);
	} 
	printf("����`�M=%f\n",b);
	for (j=3;i<=199;i=i+4)
	{
		c=c+(1/j);
	}
	printf("�[���`�M=%f\n",c);
	a=a-b+c;
	printf("�ƭ�=%f\n",a);
}

