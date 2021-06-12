#include<stdio.h>
int main()
{
    float salary,earn;
    scanf("%f",&salary);
    if(salary>0&&salary<=400.00)
    {
        earn=((salary*15)/100);
        salary=(salary+earn);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earn);
        printf("Em percentual: 15 %%\n");
    }
    else if(400<salary&&salary<=800)
    {
        earn=((salary*12)/100);
        salary=(salary+earn);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earn);
        printf("Em percentual: 12 %%\n");
    }
    else if(800<salary&&salary<=1200)
    {
        earn=((salary*10)/100);
        salary=(salary+earn);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earn);
        printf("Em percentual: 10 %%\n");
    }
    else if(1200<salary&&salary<=2000)
    {
        earn=((salary*7)/100);
        salary=(salary+earn);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earn);
        printf("Em percentual: 7 %%\n");
    }
    else if(2000<salary)
    {
        earn=((salary*4)/100);
        salary=(salary+earn);
        printf("Novo salario: %.2f\n",salary);
        printf("Reajuste ganho: %.2f\n",earn);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
