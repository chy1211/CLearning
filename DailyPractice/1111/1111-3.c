#include <stdio.h>
#include <stdlib.h>
int main()
{
	float area;
	int flag;
	printf("��J�@�B�I��,���]�}�����nd,�C���N�}�����h�@�b, �N��X�h�֦��H�᭱�n�|�p��0.00001\n");
	scanf("%f",&area);
	flag=0;
	do
	{
		area=area/2.0;
		flag=flag+1;
	}while(area>0.00001);
	printf("%d���᭱�n�|�p��0.00001\n",flag);
	system("pause");
}
