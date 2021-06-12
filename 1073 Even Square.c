#include<stdio.h>
int main()
{
    int x,i=2;
    scanf("%d",&x);
    while(i<x+1)
    {

        printf("%d^2 = %d\n",i,i*i);
        i=i+2;
    }
    return 0;
}
