#include <stdio.h>
#include <stdlib.h> 
int main()
{
	int a,b,c; //宣告
	printf("任意輸入三個數:");
	scanf("%d %d %d",&a,&b,&c); //輸入函式 
	
    printf("a=%d,b=%d,c=%d",a,b,c);

if ((a>b)&&(b>c))//a>b>c 
{  	
	 printf(" %d>%d>%d a>b>c \n",a,b,c);
	 }
else if((a>c)&&(c>b))//a>c>b
{
     printf(" %d>%d>%d a>c>b \n",a,c,b);
	 } 
else if((b>a)&&(a>c))//b>a>c
{ 
     printf(" %d>%d>%d b>a>c \n",b,a,c);
	 } 
else if((b>c)&&(c>a))//b>c>a
{ 
     printf(" %d>%d>%d b>C>a \n",b,c,a);
     } 
else if((c>b)&&(a>b))//c>a>b
{
     printf(" %d>%d>%d c>a>b \n",c,a,b);
	 }
else //c>b>a
{
     printf(" %d>%d>%d c>b>a \n",c,b,a);
	 }
system("pause");

}
