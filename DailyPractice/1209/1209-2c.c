#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int a; 
	a=0;
	do
	{
		if(n%10==8)
		{
			a++;
		}
		n=n/10;
	}while(n!=0);
	return a;
}
int main()
{
	int n;
	printf("�п�J�@�Ӥp��65536�����,�N��X���X��8�C\n");
	scanf("%d",&n);
	printf("%d��",fun(n));
	system("pause");
}
