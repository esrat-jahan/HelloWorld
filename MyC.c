#include<stdio.h>
void main()
{
    int a=0;
    scanf ("%d",&a);
    printf ("%d\n",a);

    int b=(a-(a%100))/100;
    printf ("%d nota(s) de R$ 100,00\n",b);
    a=a%100;

    b=(a-(a%50))/50;
    printf ("%d nota(s) de R$ 50,00\n",b);
    a=a%50;

    b=(a-(a%20))/20;
    printf ("%d nota(s) de R$ 20,00\n",b);
    a=a%20;

    b=(a-(a%10))/10;
    printf ("%d nota(s) de R$ 10,00\n",b);
    a=a%10;

    b=(a-(a%5))/5;
    printf ("%d nota(s) de R$ 5,00\n",b);
    a=a%5;

    b=(a-(a%2))/2;
    printf ("%d nota(s) de R$ 2,00\n",b);
    a=a%2;

    printf("%d nota(s) de R$ 1,00\n",a);
}
