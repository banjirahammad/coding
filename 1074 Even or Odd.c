#include<stdio.h>
int main()
{
    int x,i=2,num;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&num);
        if(num%2==0&&num<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(num%2==0&&num>0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if(num%2!=0&&num<0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(num%2!=0&&num>0)
        {
            printf("ODD POSITIVE\n");
        }
        else
        {
            printf("NULL\n");
        }
    }

    return 0;
}
