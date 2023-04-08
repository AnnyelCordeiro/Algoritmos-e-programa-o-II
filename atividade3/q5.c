/*5. Escreva um programa modularizado que reproduz o jogo de “adivinhe o número” da
seguinte maneira: seu programa escolhe o número a ser adivinhado selecionando um
número inteiro aleatoriamente no intervalo de 1 a 1000. O programa deve funcionar da
seguinte forma:*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int num();

int main(){
int n,numerosort,i=0;
srand((unsigned)time(NULL));
numerosort=num();

for ( i = 0; i < 1000; i++)
{
    printf("digite o número escolhido:");
    scanf("%d", &n);
    if (n==numerosort)
    {
        printf("Excelente, você acertou :)\n");
    }else if (n>numerosort)
    {
        printf("seu número está alto\n");
    }else if (n<numerosort)
    {
        printf("seu número está baixo\n");
    }
    
}

return 0;
}

int num(){
return rand()%1000;
}