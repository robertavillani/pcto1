#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("inserisci tre numeri");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d=a-b;
    e=b-c;
    if(d==e)
    {
        printf("sono numeri progressivi");
    }
    else
    {
        printf("non sono numeri progressivi");
    }
    }