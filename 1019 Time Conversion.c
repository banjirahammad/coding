#include<stdio.h>
int main()
{
    int time,hours,mins,secs;
    scanf("%d",&time);
    hours=time/3600;
    time=time%3600;
    mins=time/60;
    secs=time%60;
    printf("%d:%d:%d\n",hours,mins,secs);
    return 0;
}
