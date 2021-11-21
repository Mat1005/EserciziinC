#include <stdio.h>

int main()    
{    
 int n1=1,n2=1,n3,i,n;    
 printf("Inserire un numero per stampare la serie di Fibonacci per i primi n, n è il numero inserito");    
 scanf("%d",&n);    
 printf("%d %d",n1,n2);
 for(i=2;i<n;++i)
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    
