#include <stdio.h>
int main ()
{
    int a;
    printf("inserisci eta");
    scanf("%d", &a);
    if (a>=18)
    {
        printf("sei maggiorenne");
    }
    else
    {
        printf("non sei maggiorenne");
    }
}