typedef struct {
    int chave;
    char nomeCarro[20];
} Registro;
#define MAX 1000
//questao02 parte 1
typedef struct {
    Registro iten[MAX];
    int tamanho;
} Tabela;

void questao05(Tabela *tabela) {
    int codigo, i, qtd, retirado = 0;
    printf("\nDigite o codigo a ser retirado: ");
    scanf("%d", &codigo);

    for(i = 0; i < tabela->tamanho; i++) {
        if(tabela->iten[i].chave == codigo) {
            tabela->iten[i].chave = tabela->iten[tabela->tamanho].chave;
            tabela->tamanho = tabela->tamanho - 1;
            retirado += 1;
        }
    }
    printf("%i registros com o código %i foram removidos\n", retirado, codigo);
    qtd = questao04(codigo, tabela);
    printf("O codigo %i se repete %i vez(es)\n\n", codigo, qtd);
}