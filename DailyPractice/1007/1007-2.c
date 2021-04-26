#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
int main()
{
    int a,b; //a=玩家 b=乙 c=剪刀or石頭or布 
    printf("您正在和 乙 猜拳 請輸入 剪刀=1 石頭=2 布=3 \n");
    srand(time(NULL));
    b=(rand() % 3)+1; 
    scanf("%d",&a);

     if (a==1) 
     { 
     printf("您輸入的是剪刀\n");
	 }
     else if (a==2) 
     {
	 printf("您輸入的是石頭\n");
	 }
	 else
	 {
	 printf("您輸入的是布\n"); 
	  }	 
	 
	  
	 if (b==1) 
	 { 
     printf("\n 乙 出的是  剪刀\n");
	 }
	 else if (b==2) 
	 {
	 printf("\n 乙 出的是  石頭\n");
	 }
	 else
	 {
	 printf("\n 乙 出的是  布\n"); 
	  }	   
	 
	 
	  if(a==b)
	  { 
     printf("\n平手了!\n");
	 }  
	 else if ((a==1&b==3)||(a==2&b==1)||(a==3&b==2))
	 {
     printf("\n您獲勝了!\n");
	 }
	 else 
	 {
	 printf("\n乙獲勝了!\n");
	 }
	 
system("pause");	 	 
}
