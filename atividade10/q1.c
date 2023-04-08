#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define MAX 1000

typedef struct {
    int chave;
    char nomeCarro[MAX];
} Registro;

typedef struct {
    Registro iten[MAX];
    int tamanho;
} Tabela;

void q2(Tabela *tabela);
void salvarDados(Tabela *t,char arquivo[MAX]);
void restauraDados(Tabela *tabvoid, char arquivo[MAX]);

int main() {
    char fnome[20];
    char filename[20];
    int i,opcao;
    srand(time(NULL));
    Tabela tabela;
    q2(&tabela);

    printf("Sistema de backup de dados\n");
    printf("Informe a operação desejada (1-salvar, 2-restarar):");
      scanf("%i", &opcao);
if (opcao==1)
{
    printf("Informe o nome do arquivo de backup:");
    scanf("%s", &fnome[20]);
    salvarDados(&tabela, fnome);
}else if(opcao==2){
    printf("Informe o nome do arquivo de backup:");
    scanf("%s", &filename[20]);
    restauraDados(&tabela, filename);
}
   
printf("Operação concluída com sucesso!");

}

void q2(Tabela *tabela) {
    int i = 0, max = MAX, min = 1;
    for(i = 1; i < MAX; i++) {
        tabela->iten[i].chave = rand() % max + min;
        strcpy(tabela->iten[i].nomeCarro, "Gol");
    }
}

void salvarDados(Tabela *t,char arquivo[MAX]){
FILE *ft;
int i=0;
strcat(arquivo, ".txt");
ft = fopen(arquivo,"w");
 if (ft==NULL)
    {
        fprintf(ft,"Erro ao abrir a tabela\n");
        exit(1);
    }else{
       printf("aberto com sucesso\n");
    }
for ( i = 0; i < MAX; i++)
{
   fprintf(ft,"%d %s", t->iten[i].chave, t->iten[i].nomeCarro);
    
}
fclose(ft);
}
/*b) Função "restaurarDados" que recebe como parâmetros uma nova tabela (vazia) e um nome
de arquivo (usado para salvar dados). Essa função deve preencher a tabela com todos os
registros no arquivo informado.*/
void restauraDados(Tabela *tabvoid, char arquivo[MAX]){
	FILE *frd1, *frd2;
	char c;
	int i;
	
	strcat(arquivo,".txt");
	frd1 = fopen(arquivo, "r");
	frd2 = fopen("TabelaBackup.txt", "w");
	
	c = fgetc(frd1);
	i=0;
	while (i < 10000){
		fputc(c, frd2);
		c = fgetc(frd1);
		
		i++;
	}

	

}

