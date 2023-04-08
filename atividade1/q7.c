// 7) Faça um programa que receba dois números inteiros positivos X e Y, sendo
// X < Y-2. Calcule e mostre:
// (a) a soma dos números pares desse intervalo de números, incluindo os
// números digitados;
// (b) a multiplicação dos números ímpares desse intervalo, incluindo os
// digitados;

#include<stdio.h>

int main(){
 int x,y,i,s,m;
 
 scanf("%i", &x);
 scanf("%i", &y);
 
 for(i=x;i<=y;i++){
     if(i%2==0){
         s=s+i;
     } else{
         m=m*i;
     }
 }
 printf("soma: \n % i", m);
 printf("\nmultiplicação:  %i ", m);
}
