#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int counta,countb,awin,bwin;
	counta=0,countb=0;
	do{
		counta=rand()%3+1; //1=剪刀 3=布
		countb=rand()%3+1; //2=石頭 
	}while(counta<n&&countb<n);
	if(((counta==1)&&(countb==3))||((counta==2)&&(countb==1))||((counta==3)&&(countb==2)))
	{
		awin++;
		printf("甲勝。\n");
	}
	else
	{
		bwin++;
		printf("乙勝。\n");
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
	printf("請輸入要猜幾次拳。\n");
	scanf("%d",&n);
	a=fun(n);
	if(a==1)
	{
		printf("甲最終獲勝。\n");
	}
	else if(a==2)
	{
		printf("乙最終獲勝。\n");
	}
	else
	{
		printf("兩人平手。\n");
	}
}
