// 5. Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres
// (considere que as idades dos homens serão sempre diferentes entre si, bem
// como as das mulheres). Calcule e escreva a soma das idades do homem mais
// velho com a mulher mais nova, e o produto das idades do homem mais novo
// com a mulher mais velha, conforme os exemplos abaixo:

#include<stdio.h>

int main(){
 int h1,h2,m1,m2,soma,produto;   
    
    scanf("%i %i %i %i", &h1,&h2,&m1,&m2);
    
    if(m1>m2 && h1>h2){
        soma=m2+h1;
        produto=m1*m2;
    }else if(m1<m2 && h1<h2){
        soma=m1+h2;
        produto=m2*h1;
    }if(m1<m2 && h1>h2){
        soma=m1+h1;
        produto=m2*h2;
    }else if(m1>m2 && h1<h2){
        soma=m2+h2;
        produto=m1*h1;
    }
    printf(" soma: %i   produto: %i ", soma, produto);
}
