#include<stdio.h>
int main()
{
    int NUMBER;
    float SALARY,B,C;
    scanf("%d%f%f",&NUMBER,&B,&C);
    SALARY  = B*C;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
