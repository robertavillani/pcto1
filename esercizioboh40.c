#include <stdio.h>
int main ()
{
    int a;
    int b=1969;
    printf ("inserisci anno di nascita");
    scanf("%d", &a);
if (a==b)
{
    printf ("sei nato lo stesso anno dello sbarco della luna");
}
else if (a<b)
{
    int differenza=a-b;
    printf ("sei nato %d anni prima lo sbarco della luna", differenza);
}
else if (a>b)
{
    int differenza2=a-b;
    printf ("sei nato %d dopo dello sbarco della luna", differenza2);
}
}