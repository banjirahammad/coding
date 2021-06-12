#include<stdio.h>
int main()
{
    char NAME[30];
    float salary,TOTAL,sell;
    fgets(NAME, 30, stdin);
    scanf("%f",&salary);
    scanf("%f",&sell);
    TOTAL  = salary+((sell*15)/100);
    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;
}
