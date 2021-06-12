#include<stdio.h>
int main()
{
    int i,j,tem,num[3],a,b,c;
    for(i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    a=num[0];
    b=num[1];
    c=num[2];
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(num[i]>num[j])
            {
                tem=num[i];
                num[i]=num[j];
                num[j]=tem;

            }
        }
        /*if(num[i]>num[i+1])
        {
            tem=num[i];
            num[i]=num[i+1];
            num[i+1]=tem;

        }*/
    }
    for(i=0;i<3;i++)
    {
        printf("%d\n",num[i]);
    }
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}
