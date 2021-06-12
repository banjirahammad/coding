#include<stdio.h>
int main()
{
    float money,taxt;
    scanf("%f",&money);
    if(money>0&&money<=2000)
    {
        printf("Isento\n");
    }
    else if(money>2000&&money<=3000)
    {
        money=(money-2000);
        taxt=((money*8)/100);
        printf("R$ %.2f\n",taxt);
    }
    else if(money>3000&&money<=4500)
    {
        taxt=80;
        money=money-3000;
        taxt=taxt+((money*18)/100);
        printf("R$ %.2f\n",taxt);
    }
    else
    {
        taxt=350;
        money=(money-4500);
        taxt=taxt+((money*28)/100);
        printf("R$ %.2f\n",taxt);
    }
    return 0;
}
