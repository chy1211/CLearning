#include <stdio.h>
#include <stdlib.h>
int main()
{
	int score;
	printf("�п�J���Z�A�N�۰ʧP�_���ġC\n");
	scanf("%d",&score);
	if(score>=90)
	{
		printf("����%d���u��\n",score);
	}
	else if(score>=80)
	{
		printf("����%d���ҵ�\n",score);
	}
	else if(score>=70)
	{
		printf("����%d���A��\n",score);
	}
	else if(score>=60)
	{
		printf("����%d������\n",score);
	}
	else
	{
		printf("����%d���B��\n",score);
	}
	system("pause");
}
