#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int counta,countb,awin,bwin;
	counta=0,countb=0;
	do{
		counta=rand()%3+1; //1=�ŤM 3=��
		countb=rand()%3+1; //2=���Y 
	}while(counta<n&&countb<n);
	if(((counta==1)&&(countb==3))||((counta==2)&&(countb==1))||((counta==3)&&(countb==2)))
	{
		awin++;
		printf("�ҳӡC\n");
	}
	else
	{
		bwin++;
		printf("�A�ӡC\n");
	}
	if(awin>bwin)
	{
		return 1;
	}
	else if(awin<bwin)
	{
		return 2;
	}
	else
	{
		return 3;
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
		printf("�ҳ̲���ӡC\n");
	}
	else if(a==2)
	{
		printf("�A�̲���ӡC\n");
	}
	else
	{
		printf("��H����C\n");
	}
}
