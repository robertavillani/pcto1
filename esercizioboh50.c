#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c=0;
    printf ("inserisci un numero");
    scanf("%d", &a);
b=2;
while (b<a)
{
    if (a%b==0)
    {
    c=c+1;
    }
b=b+1;
}
if (c==0)
{
    printf("il numero e'primo");
}
else
{
    printf("il numero non e'primo");
}
} vff