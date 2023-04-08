#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct 
{
    int cod;
    char carro[20];
    float valor;
}locacion;

void formatacao();
void escrita();
void leitura();
void busca();

int main() {

    int opcao;
    
    printf("Sistema de locação baseado em arquivo\n");
    printf("Informe a opção desejada (1-formatar, 2-escrever, 3-ler, 4-buscar, 0-finalizar):");
    printf("\n");
    scanf("%d", &opcao);

    do
    {
        switch (opcao)
        {
        case 1:
            formatacao();
            break;
        case 2:
            escrita();
            break;
        case 3:
            leitura();
            break;
        case 4:
            busca();
            break;
        case 0:
            return 0;
            break;
        }
        printf("\n");
        setbuf(stdin, NULL);
        printf("Informe a opção desejada (1-formatar, 2-escrever, 3-ler, 4-buscar, 0-finalizar):");
        scanf("%d", &opcao);
        printf("\n");
    } while (opcao != 0);

    return 0;
}

void formatacao(){
    FILE *ffomatacao;
    locacion locacao = {0, "", 0.00};
    int i;

    if((ffomatacao = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    } else {
        for (i = 0; i < 1001; i++)
        {
            fwrite(&locacao, sizeof (locacao), 1, ffomatacao);
        }
        printf("Operação de formatacao finalizada\n");
        fclose(ffomatacao);
    }
}

void escrita(){
    FILE *fescrita;
    locacion locacao;
    int i;
    if((fescrita = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    } else {
         printf("Digite o codigo da locacao (0-finalizar): ");
        scanf("%d", &locacao.cod);

        while (locacao.cod != 0)
        {
            printf("Digite o nome do veiculo: ");
            scanf("%s", locacao.carro);
            setbuf(stdin, NULL);
            printf("Digite o valor da locacao: ");
            scanf("%f", &locacao.valor);
            fseek(fescrita, (locacao.cod - 1) * sizeof (locacao), SEEK_SET );
            fwrite(&locacao, sizeof(locacao), 1 ,fescrita);
            printf("Digite o codigo da locacao (0-Finalizar): ");
            scanf("%d", &locacao.cod);
        }
        printf("Operação de escrita finalizada\n");
        fclose(fescrita);
    }

   
}

void leitura(){
    FILE *fleitura;
    locacion locacao;
    int i = 0, retorno;

    if((fleitura = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    } else {
        
        while (!feof(fleitura))
        {
            fseek(fleitura, ((i) * sizeof(locacao)), SEEK_SET);
            fread(&locacao, sizeof(locacao), 1, fleitura);
            if (!(locacao.cod == 0 && locacao.valor == 0.00))
            {
                printf("Codigo de locacao  Nome do veiculo  Valor da locacao\n");
                printf("%-18d %-16s %.2f\n", locacao.cod, locacao.carro, locacao.valor);
            }
            i++;

        }
        printf("Operação de leitura finalizada\n");
        fclose(fleitura);
    }

}

void busca(){
    FILE *fbusca;
    locacion locacao;
    int i;

    if((fbusca = fopen("dados.bin", "rb+")) == NULL){
        printf("Arquivo não encontrado\n");
    } else {
        printf("Digite o codigo da locacao: ");
        scanf("%d", &locacao.cod);
        fseek(fbusca,((locacao.cod - 1) * sizeof(locacao)), SEEK_SET);
        fread(&locacao, sizeof(locacao), 1, fbusca);
        
        printf("Codigo de locacao  Nome do veiculo  Valor da locacao\n");
        printf("%-18d %-16s %.2f\n", locacao.cod, locacao.carro, locacao.valor);

        fclose(fbusca);
        printf("Operação de busca finalizada\n");
    }
}