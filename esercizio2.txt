#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int max=0;
    int min=0;
    int diff=0;
    printf("Inserire tre numeri per ottenere la differenza tra il maggiore e il minore");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>=b && a>=c)
    {
        max = a;
    }
    else if(b>=a && b>=c)
    {
        max = b;
    }
    else if(c>=b && c>=a)
    {
        max = c;
    }
    if(a<=b && a<=c)
    {
        min = a;
    }
    else if(b<=a && b<=c)
    {
        min = b;
    }
    else if(c<=b && c<=a)
    {
        min = c;
    }
    diff = max-min;
    printf("Il risultato è: %d", diff);

}
