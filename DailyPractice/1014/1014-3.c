#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,count;
    printf("�п�J�@�ơA�N�C�X�Ӽƪ��]�ơC\n");
    count=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            printf("i=%d\n",i);
            count=count+1;
        }
    }
    printf("\nN=%d ��%d�Ӧ]��",n,count);
}
