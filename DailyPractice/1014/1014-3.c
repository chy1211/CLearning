#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,count;
    printf("叫块计盢赣计计\n");
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
    printf("\nN=%d Τ%d计",n,count);
}
