#include <stdio.h>
#define N 1000

void prencherVetor(int max);
void derteminarMenor(int max);

int X[N] = {}, menor, posicaomenor = 0;

int main() {

    int num;
    scanf("%d", &num);

    prencherVetor(num);
    derteminarMenor(num);

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicaomenor);
    

    return 0;
}

void prencherVetor(int max){
    int i;
    for (i = 0; i < max; i++)
    {
        scanf("%d", &X[i]);
    }
}

void derteminarMenor(int max){
    int i;
    menor = X[0];
    for (i = 0; i < max; i++)
    {
        if (X[i] < menor)
        {
            menor = X[i];
            posicaomenor = i;
        }
        
    }

}