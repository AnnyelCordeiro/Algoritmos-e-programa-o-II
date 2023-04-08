#include <stdio.h>
#include <string.h>

#define MAX 1001

typedef struct 
{
    int cod;
    char descricao[30];
    float preco;
}Registro;

void cadastrar(FILE *favaliacao);
void visualizar(FILE *favaliacao);
void visualizar_por_reg(FILE *favaliacao);
void ordenar(FILE *favaliacao);
void selecao(Registro r[], int n);

int main() {

    int opcao;
    FILE *favaliacao;

    printf("1-cadastrar\n2-visualizar\n3-visualizar um registro\n4-ordenar por preço\n5-finalizar\n");
    printf("Informe o módulo desejado: ");
    scanf("%d", &opcao);

    while (opcao != 5)
    {
        switch (opcao)
        {
        case 1:
            cadastrar(favaliacao);
            break;
        case 2:
            visualizar(favaliacao);
            break;
        case 3:
            visualizar_por_reg(favaliacao);
            break;
        case 4:
            ordenar(favaliacao);
            break;
        case 5:
            return 0;
            break;
        }
        printf("\n");
        printf("Informe o módulo desejado: ");
        scanf("%d", &opcao);
    }
    return 0;
}


void cadastrar(FILE *favaliacao){
    Registro reg, reg1;
    int i = 0;

    if((favaliacao = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    } else {

        printf("Digite as informacoes do produto:\n");

        printf("Digite o codigo: ");
        scanf("%d", &reg.cod);
        printf("digite a deescricao: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]s", reg.descricao);
        printf("digite o preco: ");
        scanf("%f", &reg.preco);

        while (!feof(favaliacao))
        {
            fseek(favaliacao, ((i) * sizeof(reg)), SEEK_SET);
            fread(&reg1, sizeof(reg1), 1, favaliacao);
            
            if (reg.cod == reg1.cod)
            {
                
                printf("Código já foi cadastrado\n");
                break;
            } else {
             
                printf("Código novo");
                fwrite(&reg, sizeof(reg),1, favaliacao);
                break;
            }
            i++;
        }
        fclose(favaliacao);
    }
}

void visualizar(FILE *favaliacao){
    Registro reg;
    int i = 0, j = 0;

    if((favaliacao = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    } else {

        while (!feof(favaliacao))
        {
            fseek(favaliacao, ((i) * sizeof(reg)), SEEK_SET);
            fread(&reg, sizeof(reg), 1, favaliacao);
            i++;
        }

        for (j = 0; j < i - 1; j++)
        {
            fseek(favaliacao, ((j) * sizeof(reg)), SEEK_SET);
            fread(&reg, sizeof(reg), 1, favaliacao);
            printf("%d, %s, %.2f\n", reg.cod, reg.descricao, reg.preco);
        }
        
        fclose(favaliacao);
    }
}

void visualizar_por_reg(FILE *favaliacao){
    Registro reg, reg1;
    int i = 0, j = 0;

    if((favaliacao = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    } else {

        printf("Digite o código que deseja buscar:");
        scanf("%d", &reg.cod);

        while (!feof(favaliacao))
        {
            fseek(favaliacao, ((i) * sizeof(reg)), SEEK_SET);
            fread(&reg1, sizeof(reg1), 1, favaliacao);
            i++;
        }

        for (j = 0; j < i - 1; j++)
        {
            fseek(favaliacao, ((j) * sizeof(reg)), SEEK_SET);
            fread(&reg1, sizeof(reg1), 1, favaliacao);
            if (reg.cod == reg1.cod)
            {
                printf("%d, %s, %.2f\n", reg1.cod, reg1.descricao, reg1.preco);
            }
        }
        
        fclose(favaliacao);
    }
}

void selecao(Registro r[], int n){
    int i, j, cont = 0, cont;
    Registro aux;
    for (i = 0; i < n - 1; i++)
    {
        cont = i;
        for (j = i + 1; j < n; j++)
        {
            if (r[j].preco < r[cont].preco)
            {
                cont = j;
            }
        }
        aux = r[i];
        r[i] = r[cont];
        r[cont] = aux;
    }
}

void ordenar(FILE *favaliacao){
    Registro reg, r[MAX];
    int i = 0, j = 0;


    if((favaliacao = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    } else {

        while (!feof(favaliacao))
        {
            fseek(favaliacao, ((i) * sizeof(reg)), SEEK_SET);
            fread(&reg, sizeof(reg), 1, favaliacao);
            i++;
        }

        for (j = 0; j < i - 1; j++)
        {
            fseek(favaliacao, ((j) * sizeof(reg)), SEEK_SET);
            fread(&reg, sizeof(reg), 1, favaliacao);
            r[j] = reg;
        }

        selecao(r, (i-1));

        for (j = 0; j < i - 1; j++)
        {
            printf("%d, %s, %.2f\n", r[j].cod, r[j].descricao, r[j].preco);
        }
        
        fclose(favaliacao);
    }
}


