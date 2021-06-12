#include<stdio.h>
int main()
{
    int i,count=0;
    float sum=0,num[6];
    for(i=0;i<6;i++)
    {
        scanf("%f",&num[i]);
        if(num[i]>=0)
        {
            sum=sum+num[i];
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);
    return 0;
}
