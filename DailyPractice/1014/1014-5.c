#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,flag;
    printf("�п�J�@�ơA�N�ˬd�O�_����ơC\n\n");
    flag=0; //�X�� 
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            flag=1;
        }
    }
    printf("\nN=%d\n",n);
    if(flag==0)
    {
    	printf("\n%d�O���\n",n);
	}
	else
	{
		printf("\n%d���O���\n",n);
	}
}
