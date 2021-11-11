#include <stdio.h>

int main()
{
    int n, s = 0;
    printf("inserisci un numero ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("il numero %d ha %d fattori primi", n, s);
    }
    else if (n == 1)
    {
        printf("il numero %d ha %d fattori primi", n, s);
    }
    else if (n == 2)
    {
        printf("2 è un fattore primo di %d \n", n);
        printf("il numero %d ha 1 fattore primo", n);
    }
    else
    {
        for(int i = 2; i <= n; i++)   
        {
            if (n%i == 0)
            {
                if (i == 2)
                {
                    printf("%d è un fattore primo di %d \n", i, n);
                    s++;
                }
                else
                {
                    for (int a = 2; a < i; a++)
                    {   
                        if (i%a == 0)
                        {
                            break;
                        }
                        else if (a == i - 1)
                        {
                            printf("%d è un fattore primo di %d \n", i, n);
                            s++;
                        }
                    }
                }
            }
        }
        printf("il numero %d ha %d fattori primi", n, s);
    }
}
