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


void inserir(Tabela *tabela) {
    int i = 0, max = 1000, min = 1;
    for(i = 1; i < MAX; i++) {
        tabela->iten[i].chave = rand() % max + min;
        strcpy(tabela->iten[i].nomeCarro, "Gol");
    }
}