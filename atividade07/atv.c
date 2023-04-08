#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
	int chave;
	char nome[30];
	char endereco[50];
	char telefone[14];
}Alunos;

void gerarDados(Alunos v[ ], int n, int ordemChave);
void typechave(Alunos v[ ], int n, int ordemChave, int tipo);

int main(){
	int n, ordemChave, ordenacao;

	srand((unsigned) time(NULL));

	scanf("%d", &n);
	Alunos v[n];
	printf("\n");
	
	do{
		scanf("%d", &ordemChave);
		if(ordemChave == 3){
			break;
		}
		scanf("%d", &ordenacao);
	
		gerarDados(v, n, ordemChave);
		typechave(v, n, ordemChave, ordenacao);

	}while(ordemChave != 3);
	
	return 0;
}

void gerarDados(Alunos v[ ], int n, int ordemChave){
	int i = 0, j;
	
	switch(ordemChave){
		case 0:
			for(i = 0;i < n;i++){
				v[i].chave = i;
			}
			break;
		case 1:
			for(i = 0;i < n;i++){
				v[i].chave = rand() % 1000;
			}
			break;
		case 2:
			j = n;
			for(i = 0; j > 0; j--){
				v[i].chave = j;
				i++;
			}
			break;	
	}
}

void typechave(Alunos v[ ], int n, int ordemChave, int tipo){
	
	int i, j, aux, min;
	Alunos aux1;
	
	switch(tipo){
		case 0:
			printf("bolha\n");
			for(i = 0;i < n;i++){
				printf("%d ", v[i].chave);
			}
			printf("\n");
			for(i= 0; i < n-1; i++){ 
				for(j= 1; j <n-i; j++){ 
					if (v[j].chave < v[j-1].chave){ 
						aux = v[j].chave;
						v[j].chave = v[j-1].chave;
						v[j-1].chave = aux;
					}
				}
			}
			break;
		case 1:
			printf("selecao\n");
			for(i = 0;i < n;i++){
				printf("%d ", v[i].chave);
			}
			printf("\n");
			for(i= 0; i < n - 1; i++){
				min = i;
				for(j = i+1; j< n; j++){
					if (v[j].chave < v[min].chave){
						min = j;
					}
				}
				aux = v[min].chave;
				v[min].chave = v[i].chave;
				v[i].chave = aux;
			}
			break;
		case 2:
			printf("insercao\n");
			for(i = 0;i < n;i++){
				printf("%d ", v[i].chave);
			}
			printf("\n");
			for (i = 1; i<n; i++) {
				aux1 = v[i];
				j = i-1;
		while ((j >= 0) && (aux1.chave < v[j].chave)){ 
			v[j + 1] = v[j];
			j--;
		}
		v[j+1] = aux1;
			}
		break;
		}
	for(i = 0;i < n;i++){
		printf("%d ", v[i].chave);
	}
    printf("\n");
	
}