#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
int main()
{
    int a,b; //a=���a b=�A c=�ŤMor���Yor�� 
    printf("�z���b�M �A �q�� �п�J �ŤM=1 ���Y=2 ��=3 \n");
    srand(time(NULL));
    b=(rand() % 3)+1; 
    scanf("%d",&a);

     if (a==1) 
     { 
     printf("�z��J���O�ŤM\n");
	 }
     else if (a==2) 
     {
	 printf("�z��J���O���Y\n");
	 }
	 else
	 {
	 printf("�z��J���O��\n"); 
	  }	 
	 
	  
	 if (b==1) 
	 { 
     printf("\n �A �X���O  �ŤM\n");
	 }
	 else if (b==2) 
	 {
	 printf("\n �A �X���O  ���Y\n");
	 }
	 else
	 {
	 printf("\n �A �X���O  ��\n"); 
	  }	   
	 
	 
	  if(a==b)
	  { 
     printf("\n����F!\n");
	 }  
	 else if ((a==1&b==3)||(a==2&b==1)||(a==3&b==2))
	 {
     printf("\n�z��ӤF!\n");
	 }
	 else 
	 {
	 printf("\n�A��ӤF!\n");
	 }
	 
system("pause");	 	 
}
