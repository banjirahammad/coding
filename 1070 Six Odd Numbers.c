#include<stdio.h>
int main()
{
    int j,x;
    scanf("%d",&x);
    if(x%2==0)
    {
        x=x+1;
        for(j=0;j<6;j++)
        {
            printf("%d\n",x);
            x=x+2;
        }
    }
    else
    for(j=0;j<6;j++)
    {
        printf("%d\n",x);
        x=x+2;
    }
    return 0;
}
