#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Inserire tre numeri ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a==b && a==c){
        printf("Tutti i numeri sono uguali.");
    }
    else if(a==b && b!=c){
        printf("I numeri uguali sono: %d e %d ",a,b);
    }
    else if(b==c && a!=c){
        printf("I numeri uguali sono: %d e %d ",c,b);
    }
    else if(c==a && c!=b)
    {
        printf("I numeri uguali sono: %d e %d ",c,a);
    }
    
        else{
        printf("Non ci sono numeri uguali");
    }

    
}
