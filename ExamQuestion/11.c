#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y;
	x=0;
	y=0;
	start:
	printf("\n�п�J�y��(x,y)�A�{���N�P�_�Ӯy�Ъ��H���C\n");
	scanf("%d %d",&x,&y);
	if (x>0&&y>0) 
     { 
     printf("�y��( %d , %d )���Ĥ@�H��\n",x,y);
	 }
     else if (x<0&&y>0) 
     {
	 printf("�y��( %d , %d )���ĤG�H��\n",x,y);
	 }
	 else if (x<0&&y<0) 
     {
	 printf("�y��( %d , %d )���ĤT�H��\n",x,y);
	 }
	 else if (x==0&&y==0) 
     {
	 printf("�y��( %d , %d )��󤤤��I\n",x,y);
	 }
	 else if (x==0) 
     {
	 printf("�y��( %d , %d )���Y�b�W\n",x,y);
	 }
	 else if (y==0) 
     {
	 printf("�y��( %d , %d )���X�b�W\n",x,y);
	 }
	 
	 else
	 {
	 printf("�y��( %d , %d )���ĥ|�H��\n",x,y); 
	  }	
	 goto start; 
}

