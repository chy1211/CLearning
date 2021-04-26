#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    printf("請輸入一數，將列出該數的因數。\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            printf("i=%d\n",i);
        }
    }
    
}
