#include <stdio.h>
#include <stdlib.h>
int fun(int y)
{
	int x,z,t1,t2;
	t1=0,t2=0;
	do
	{
		x=0;
		x=rand()%2+1;
		if(x==1)
		{
			t1+=1;
			printf("����\n");	
		}
		else
		{
			t2+=1;
			printf("�ϭ�\n");	
		} 
		z=z+1;
	}while(z<y);
	return t1;
	
}
int main()
{
	int y,t1,t2;
	t1=0,t2=0;
	printf("�п�J�n��X��\n");
	scanf("%d",&y);
	t1=fun(y);
	t2=y-t1;
	printf("\n����%d��,�ϭ�%d��",t1,t2);
}

