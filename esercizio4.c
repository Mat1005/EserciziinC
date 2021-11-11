#include <stdio.h>
int main()
{
    int n;
    int tot;

    printf("Quanti numeri vuoi inserire?");
    scanf("%d", &tot);
    int numbers[tot];
    for(int i=0; i<tot; i++){
       printf("Inserire un numero ");
       scanf("%d", &n);
       numbers[i]=n;
    }
    for(int a=0; a<tot; a++){
         for(int b=0; b<tot; b++){
            if(numbers[a]==numbers[b] && a!=b && a>b ){
                    printf("I numeri %d e %d sono uguali.",numbers[a], numbers[b]);
                    
                }
        }
    }
   
    
    return 0;
}
