/*3. Escreva uma função que simule o lançamento de uma moeda (use a função rand da
biblioteca stdlib.h). A função deve retornar 0 para coroa e 1 para cara. Escreva um programa
para lançar a moeda 100 vezes. Para cada lançamento da moeda, o programa deve imprimir
“cara” ou “coroa” e, ao final dos lançamentos, imprimir o número de vezes que o lado "cara"
apareceu.
Nota: Se o programa simular realisticamente o lançamento da moeda, o número de vezes
deve ser aproximadamente metade dos lançamentos, ou seja, aproximadamente 50.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int lancamento[100];
int moedajogada();

int main(){
int i,coroa=0,cara=0;
srand(time(NULL));
moedajogada();
for ( i = 0; i < 100; i++)
{
    if (lancamento[i]%2==0)
    {
        coroa++;
        printf("\ncoroa\n");
    }else if(lancamento[i]%2==1){
        cara++;
        printf("\ncara\n");
    }
  
}
  printf("cara apareceu %d vezes", cara);
}
int moedajogada(){
int i;
rand();

for ( i = 0; i < 100; i++)
{
    lancamento[i]=rand();
}


}