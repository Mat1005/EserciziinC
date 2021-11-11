#include <stdio.h>
int main()
{
    int n;
    printf("inserire un numero ");
    scanf("%d", &n);
    if (n==0 || n==1){
        printf("il numero %d non è primo", n);
    }
    else if (n==2){
        printf("il numero %d è primo", n);
    }
    else {
        for (int i = 2; i<n; i++)
    {
        
        if (n%i == 0)
        {
            printf("il numero %d non è primo", n);
            break;
        }
        
        else if (i == n - 1)
        {
            printf("il numero %d è primo", n);
        }
    }   
    
        
    }
}

