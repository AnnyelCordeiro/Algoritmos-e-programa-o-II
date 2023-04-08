/*Faça um algoritmo para mostrar números duplicados. Use um array de subscrito único (ou
seja, um vetor) para ler 10 números, cada um entre 10 e 100, inclusive. À medida que cada
número for lido, imprima-o apenas se ele não for uma duplicata de um número já lido.
Considere a "pior das hipóteses": os 10 números são diferentes. Use o menor array possível
para resolver o problema.*/

#include<stdio.h>
#define m 10
int main(){

int num[m],i,j,cont=0,a[m];

for ( i = 0; i < m; i++)
{
    num[i]=0;
    a[i]=0;
}
for ( i = 0; i < m; i++)
{
printf("Digite um numero");
scanf("%i", &num[m]);

if (num[i]>=10 && num[i]<100)
{
 for ( j = 0; j < i; i++)
 {
     if (num[i]==a[i]);
     {
         cont=1;
     }if (!cont)
     {
         num[i]=a[i];
     }else{
         printf("valor invalido");
     }
     
     
 }
    
}


}


}