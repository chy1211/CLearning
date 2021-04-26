#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y;
	x=0;
	y=0;
	start:
	printf("\n請輸入座標(x,y)，程式將判斷該座標的象限。\n");
	scanf("%d %d",&x,&y);
	if (x>0&&y>0) 
     { 
     printf("座標( %d , %d )位於第一象限\n",x,y);
	 }
     else if (x<0&&y>0) 
     {
	 printf("座標( %d , %d )位於第二象限\n",x,y);
	 }
	 else if (x<0&&y<0) 
     {
	 printf("座標( %d , %d )位於第三象限\n",x,y);
	 }
	 else if (x==0&&y==0) 
     {
	 printf("座標( %d , %d )位於中心點\n",x,y);
	 }
	 else if (x==0) 
     {
	 printf("座標( %d , %d )位於Y軸上\n",x,y);
	 }
	 else if (y==0) 
     {
	 printf("座標( %d , %d )位於X軸上\n",x,y);
	 }
	 
	 else
	 {
	 printf("座標( %d , %d )位於第四象限\n",x,y); 
	  }	
	 goto start; 
}

