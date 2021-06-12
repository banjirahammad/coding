#include<stdio.h>
int main()
{
    int a,b,c,max,maxn;
    scanf("%d%d%d",&a,&b,&c);
    maxn=(a+b+abs(a-b))/2;
    max=(maxn+c+abs(maxn-c))/2;
    printf("%d eh o maior\n",max);
    return 0;
}
