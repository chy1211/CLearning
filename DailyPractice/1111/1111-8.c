#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,count1,count2,i;
	count1=0,count2=0,i=1;
	do
	{
	    a=rand()%2;
		if(a==1)
		{
			printf("�w���Y�X�ϭ��C\n");
		}
		if(a==0)
		{
			printf("�w���Y�X�����C\n");
		}
		if(a==1)
		{
		count1=count1+1;
	    }
	    if(a==0)
		{
		count2=count2+1;
	    }
	    i++;
	}while(i<=50);
	printf("�w���Y�X����%d��,�Y�X�ϭ�%d��\n",count2,count1);
	system("pause");
}
