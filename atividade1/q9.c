// Escreva um programa que leia os dois lados de um quadrado e depois e
// // depois exiba esse quadrado a partir de asteriscos. Seu programa deverá
// funcionar para quadrados de todos os tamanhos. Segue um exemplo:
#include<stdio.h>
void main(){
    int x = 0, y = 0, a, b;
    scanf("%d %d", &a, &b);
    for(y = 1; y <= a; y++){
       
        for(x = 1; x <= b; x++){
               if(x == 1 || y == 1){
                printf("*");
                }else  if(x == b || y == a){
                   printf("*");
                 }else if(x != b || y != a){
                       printf(" ");
               }
            }
             printf("\n");
        }
    }
