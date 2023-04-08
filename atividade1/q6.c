// 6. Construa um programa que imprime a soma de todos os valores positivos
// digitados pelo usuário até que ele digite um número negativo, como mostra os
// exemplos

#include<stdio.h>

int main(){
 float x,soma=0;
 

 do{
   scanf("%f", &x);
  if(x>=0){
   soma=soma+x;
  }
     }while(x>=0);
    printf("soma: %f", soma);
}
