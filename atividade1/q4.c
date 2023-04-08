//4. As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e
//R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o
//número de maçãs compradas, calcule e escreva o custo total da compra,
//conforme os exemplos abaixo:

#include<stdio.h>

int main(){
 int nm,valor_total;
 
 printf("Quantas maçãs foram compradas?");
 scanf("%i", &nm);
 
 if(nm<12){
     valor_total=nm*1.30;
 }else if(nm>=12){
     valor_total=nm*1;
 }
 printf("%i",valor_total);
    
}
