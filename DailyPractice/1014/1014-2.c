#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    printf("�п�J�@�ơA�N�C�X�Ӽƪ��]�ơC\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            printf("i=%d\n",i);
        }
    }
    
}
