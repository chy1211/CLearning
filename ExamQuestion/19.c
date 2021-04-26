#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("請輸入三邊長\n");
    float A,B,C;
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    if (((A*A+B*B)<C*C)||((A*A+C*C)<B*B)||((B*B+C*C)<A*A))
    {
      printf("該圖形為鈍角三角形\n");
    }
    else
    {
      printf("該圖形不為鈍角三角形\n");
    }
    system("pause");
}
