#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,a,b;
     printf("���N��J��Ӽ�:");
     scanf("%d %d",&a,&b);
     i=0;
     
	 for (i=a;i<=b;i++)
     {
	     if (i%2==0)
	     {
	     printf("%d\n",i);
		 }
	     else
	     {
		 i=i+1;
	     }
	 }
     printf("%d\n",i);
     
     system("pause");
}
