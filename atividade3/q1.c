/*Escreva uma função que recebe um valor inteiro e retorna o número com seus dígitos
invertidos. Por exemplo, dado o número 7631, a função deve retornar 1367. Escreva um
programa que recebe como entrada um número inteiro de 1000 a 9999 e utilize a função.*/

#include<stdio.h>

int revert();

int main(){
    int num, rev;
     printf("Numero a inverter:\n");
   scanf("%d",&num);
   if (num>=1000 && num<=9999)
   {
          rev = revert(num);
  printf("o numero invertido é: %d", rev);
   }else{
       printf("numero invalidado para inversão");
   
   }
    
} 
   
int revert(int n)
{
   int ret=0;
   int i=1;
   
   while(i<=n)
   {
       ret*=10;
       ret+=(n%(i*10)-n%i)/i;
       i*=10;
   }
   return ret;
}

