#include <stdio.h>
#include <stdlib.h> 
int main()
{
	int a,b,c;
	printf("任意輸入三個數:");
	scanf("%d,%d,%d",&a,&b,&c);
	
    printf("a=%d,b=%d,c=%d",a,b,c);
  if (a>b)
  {
  	if(c>a)
  	{
	  printf("%d>%d>%d",c,a,b);
	  }
	else if(c>b)
	{
	 printf("%d>%d>%d",a,c,b);
	}
	else
	{
	printf("%d>%d>%d",a,b,c);
	} 
  }
else if(b>a)
{
 if(c>b)
 {
 	printf("%d>%d>%d",c,b,a);
 }
 else if(c>a)
 {
 printf("%d>%d>%d",b,c,a);
 }
 else
 {
 printf("%d>%d>%d",b,a,c);
 }
}
system("pause");

}

