#include<stdio.h>
int main()
{
    double R,VOLUME,pi=3.14159;
    scanf("%lf",&R);
    VOLUME=(4*3.14159*pow(R,3))/3;
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}
