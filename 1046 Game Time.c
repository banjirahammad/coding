#include<stdio.h>
int main()
{
    int x,y,duration;
    scanf("%d%d",&x,&y);
    duration = y - x;
    if(duration<0)
    {
        duration = 24 +(y-x);
    }
    if(x==y)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    return 0;
}
