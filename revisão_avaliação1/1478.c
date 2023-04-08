#include <stdio.h>

void preencheMatriz(int tamanho, double M[][100]);
void imprimeMatriz(int tamanho, double M[][100]);

int main()
{
    int *tamanho;
    double int ma[100];
    scanf("%i", &tamanho);
	preencheMatriz(tamanho, ma);
    imprimeMatriz(tamanho, ma);
}

void preencheMatriz(int tamanho, double M[][100]){
int i,j,aux1,aux2;
while(1){
		scanf("%d", &tamanho);
		if(tamanho == 0)
		{
			break;
		}

		int matriz[tamanho][tamanho];
		for(i = 0; i < tamanho; i++)
		{
			aux1 = i + 1;
			aux2 = 2;
            }
			for(j = 0; j<= i; j++, aux1--)
			{
				matriz[i][j] = aux1;
			}
			for(j = (i + 1); j < tamanho; j++, aux2++)
			{
				matriz[i][j] = aux2; 
			}
			aux1++;	
    }
}

void imprimeMatriz(int tamanho, double M[][100]){

int i;
int j;
  preencheMatriz(i,j);
				if(j == 0)
				{
					printf("%3lf", M[i][j]);
				}
				else
				{
					printf(" %3lf", M[i][j]);
				}
		printf("\n");
    }