#include <stdio.h>
#include <stdlib.h>
int fun(float a ,float b ,float c)
{
	int y;
	y=1;
	do
	{
		a=a*(1+b);
		y++;
	}while(a<c);
	return y;
}
int main()
{
	int ans;
	float a,b,c;
	printf("�п�J�s�Ja���Q�v�Ob,�p�G�C�~���Q�����~��s�J�Ȧ�,�Y�ƧQ,�N��X�X�~�᥻��+�Q���i�W�Lc���C\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	ans=fun(a,b,c);
	printf("%d�~�᥻��+�Q���|�W�L%f��\n",ans,c);
	system("pause");
}
