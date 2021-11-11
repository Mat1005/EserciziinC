#include <stdio.h>
int main()
{
    int a;
    int k=0;
    int n;
    printf("Inserire un numero affinchè vangano sommati tutti i numeri fino al numero inserito");
    scanf("%d", &n);
    for (a=1; a<=n; a++)
    {
        k+=a;
    }
    printf("Il risultato è: %d", k);

}
