#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("�п�J�T���\n");
    float A,B,C;
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    if (((A*A+B*B)<C*C)||((A*A+C*C)<B*B)||((B*B+C*C)<A*A))
    {
      printf("�ӹϧά��w���T����\n");
    }
    else
    {
      printf("�ӹϧΤ����w���T����\n");
    }
    system("pause");
}
