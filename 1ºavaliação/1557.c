#include <stdio.h>
#define MAX 15
void preencheMatriz(int tamanho, double M[][15]);
void imprimeMatriz(int tamanho, double M[][15]);

int main() {

    int n;

    while (1){
        scanf("%d", &n;
        double M[][MAX];
        if(n == 0){
        	break;
        }
        preencheMatriz(n, M);
        imprimeMatriz(n, M);
    }

    return 0;
}
      
void preencheMatriz(int tamanho, double M[][15]){
        int digitador = 1, i, j;
            if (tamanho > 0){
            for (i = 0; i < tamanho; i++)
            {
                for (j = 0; j < tamanho; j++)
                {
                    if (j >= i)
                    {
                        M[i][j] = digitador;
                        digitador++;
                    } else {
                        M[i][j] = i - j + 1;
                    }

                }
                digitador = 1;

            }

        } 
}

void imprimeMatriz(int tamanho, double M[][15]){
        int digitador = 1, i, j;
        for (i = 0; i < tamanho; i++)
            {
                for (j = 0; j < tamanho; j++)
                {
                    if (j == 0)
                    {
                        printf("%3.0lf", M[i][j]);
                    } else {
                        printf(" %3.0lf", M[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
}