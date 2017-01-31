#include <stdio.h>
#include <stdlib.h>
int a,b;
int main(){
  printf ("numero 1:");
  scanf ("%d",&a);
  printf ("numero 2:");
  scanf ("%d",&b);
  if(a==b){
   printf ("son iguales los numeros");
  }
  else{
    printf ("son diferentes los numeros \n");
  }
  system("PAUSE");	
  return 0;
}
