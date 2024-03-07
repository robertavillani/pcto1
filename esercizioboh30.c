#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    printf("inserisci i cm dei tre lati di un triangolo");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a+b<=c||a+c<=b)
    {
        printf("non e un triangolo");
    }
    else if (a==b&&b==c)
    {
        printf("triangolo scaleno");
    }
    else if ((a==b&&b!=c)||(a==c&&b!=c)||(b==c&&b!=a))
    {
        printf("triangolo isoscele");
    }
    else
    {
        printf("triangolo equilatero");
    }
}