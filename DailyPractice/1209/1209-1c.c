#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int s,i,a,j;
    s=0;i=0;//�ŤM=1 ���Y=2 ��=3
    while(s<n&&i<n)
    {
	    a=rand()%3+1;
	    j=rand()%3+1;
	    if((a==2&&j==1)||(a==1&&j==3)||(a==3&&j==2))
	    {
		    s++;
		    printf("�ҥX%d�A�X%d ��Ĺ\n",a,j);
		}
	   if((a==2&&j==3)||(a==3&&j==1)||(a==1&&j==2))
		{
			i++;
			printf("�ҥX%d�A�X%d �AĹ\n",a,j);
		}
		if(a==j)
		{
			printf("����\n");
		}
	}	
	if(s>i)
	{
		return 1;
	}
	if(i>s)
	{
		return 2;
	}
}
int main()
{
	int a,n;
	printf("�п�J�n�q�X�����C\n");
	scanf("%d",&n);
	a=fun(n);
	if(a==1)
	{
		printf("�ҳ�");
	}
	else
	{
		printf("�A��");
	}
	system("pause");
}
