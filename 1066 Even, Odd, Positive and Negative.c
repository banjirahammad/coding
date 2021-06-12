#include<stdio.h>
int main()
{
    int i,posit=0,neg=0,even=0,odd=0,num[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]>0)
        {
            posit++;
        }
        if(num[i]<0)
        {
            neg++;
        }
        if(num[i]%2!=0)
        {
            odd++;
        }
        if(num[i]%2==0)
        {
            even++;
        }
    }

    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",posit);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}
