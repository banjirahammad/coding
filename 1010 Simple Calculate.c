#include<stdio.h>
int main()
{
    int A,B;
    double C,PAGE;
    scanf("%d%d%lf",&A,&B,&C);
    PAGE=B*C;
    scanf("%d%d%lf",&A,&B,&C);
    PAGE=PAGE+(B*C);
    printf("VALOR A PAGAR: R$ %.2lf\n", PAGE);
    return 0;
}
