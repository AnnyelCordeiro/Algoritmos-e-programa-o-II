/*Faça um programa que inicializa um vetor com números pares inteiros de 2 a 20. O vetor
deve ter a menor dimensão possível. A seguir imprima na tela esse vetor com a seguinte
formatação:*/

#include <stdio.h>

    int main(){
        int i,j, n[ 10 ],x[20];

        for ( i = 2; i <= 20; i+=2 ) {
            n[ j ] = i;
            j++;
        }
        printf( "%s%13s\n", "Elemento", "Valor" );

      for (i = 0; i < 10; i++)
    {
        if (n[i] >= 9)
        {
            printf("%8d%13d\n", i, n[i]);
        }else {
            printf("%8d%12d\n", i, n[i]);
        }
        
    }
    return 0;
    }




   /* #include <stdio.h>
#define MAX 10
#define MAX_NUMBERS 20

int vet[MAX];

void criaFor(int incio, int final, int passo);

void criaTabela();

int main(){

    criaFor(2, 20, 2);

    criaTabela();

    return 0;
}

void criaFor(int incio, int final, int passo){
    int i, count = 0;

    for (i = incio; i <= final; i+=passo)
    {
        vet[count] = i;
        count++;
    }
    
}

void criaTabela(){
    int i;
    printf("%s%16s\n", "Elemento","Valor");
    for (i = 0; i < MAX; i++)
    {
        if (vet[i] > 9)
        {
            printf("%8d%13d\n", i, vet[i]);
        }else {
            printf("%8d%12d\n", i, vet[i]);
        }
        
        
    }
    
}*/