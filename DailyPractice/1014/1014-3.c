#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,count;
    printf("請輸入一數，將列出該數的因數。\n");
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
    printf("\nN=%d 有%d個因數",n,count);
}
