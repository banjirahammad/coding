#include<stdio.h>
int main()
{
    int day1,day2,hour1,hour2,min1,min2,sec1,sec2,rd,rh,rm,rs;

    scanf("Dia %d",&day1);
    scanf("%d : %d : %d\n",&hour1,&min1,&sec1);
    scanf("Dia %d",&day2);
    scanf("%d : %d : %d",&hour2,&min2,&sec2);
    rd=day2-day1;
    rh=hour2-hour1;
    rm=min2-min1;
    rs=sec2-sec1;

    if(rs<0)
    {
        rs=rs+60;
        rm--;
    }
    if(rm<0)
    {
        rm=rm+60;
        rh--;
    }
    if(rh<0)
    {
        rh=rh+24;
        rd--;
    }
    printf("%d dia(s)\n",rd);
    printf("%d hora(s)\n",rh);
    printf("%d minuto(s)\n",rm);
    printf("%d segundo(s)\n",rs);
    return 0;
}
