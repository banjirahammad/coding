#include<stdio.h>
int main()
{
    int note,n100,n50,n20,n10,n5,n2,n1;
    int mode,m50,m25,m10,m5,m1;
    double n;
    scanf("%lf",&n);
    note=n;
    mode=((n-note)*100);


    n100=note/100;
    note=note%100;
    n50=note/50;
    note=note%50;
    n20=note/20;
    note=note%20;
    n10=note/10;
    note=note%10;
    n5=note/5;
    note=note%5;
    n2=note/2;
    note=note%2;
    n1=note;

    m50=mode/50;
    mode=mode%50;
    m25=mode/25;
    mode=mode%25;
    m10=mode/10;
    mode=mode%10;
    m5=mode/5;
    mode=mode%5;
    m1=mode;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n1);
    printf("%d moeda(s) de R$ 0.50\n",m50);
    printf("%d moeda(s) de R$ 0.25\n",m25);
    printf("%d moeda(s) de R$ 0.10\n",m10);
    printf("%d moeda(s) de R$ 0.05\n",m5);
    printf("%d moeda(s) de R$ 0.01\n",m1);
    return 0;
}
