#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 1000

//questao01
typedef struct {
    int chave;
    char nomeCarro[20];
} Registro;

//questao02 parte 1
typedef struct {
    Registro iten[MAX];
    int tamanho;
} Tabela;

void questao02(Tabela *tabela);
void ordenar(Tabela *tabela);
void questao03(Tabela *tabela);
int sequencial(int chave, Tabela *tabela, int *contsequen);
int binaria(int chave, Tabela *tabela, int *contbin);
int questao04(int codigo, Tabela *tabela);
void questao05(Tabela *tabela);
int questao06(char nome[], Tabela *tabela);
void questao07(Tabela *tabela);

int main() {
    char nome[20];
    int i, qtd = 0, codigo = 0, comp;
    srand((unsigned) time(NULL));
    Tabela tabela;
    //questao02 parte 2 preencher a tabela
    questao02(&tabela);
    //ordenar as chaves para busca binária
    ordenar(&tabela);
    //imprimir valor da tabela
    /*
    for(i = 0; i < MAX; i++) {
        printf("Nome: %s\n", tabela.iten[i].nomeCarro);
        printf("Chave: %d\n\n", tabela.iten[i].chave);
    }*/
    //questao03
    questao03(&tabela);
    //questao04
    printf("\nDigite o codigo que deseja buscar: ");
    scanf("%d", &codigo);
    qtd = questao04(codigo, &tabela);
    printf("O codigo %i se repete %i vez(es)\n\n", codigo, qtd);
    //questao05
    questao05(&tabela);
    //questao06
    printf("Digite o nome que deseja verificar se existe: \n");
    scanf("%s", nome);
    comp = questao06(nome, &tabela);
    if(comp == 0) {
        printf("Ja existe carro com o nome digitado\n");
    } else {
        printf("Nao existe carro com o nome digitado\n");
    }
    questao07(&tabela);
    return 0;
}

//função da questao02 gerador de chaves
void questao02(Tabela *tabela) {
    int i = 0, max = 1000, min = 1;
    for(i = 1; i < MAX; i++) {
        tabela->iten[i].chave = rand() % max + min;
        strcpy(tabela->iten[i].nomeCarro, "Gol");
    }
}

//ordenação das chaves
void ordenar(Tabela *tabela) {
    int i, j, min, aux;
    //ordenação por seleção
    for(i = 0; i < 1000 - 1; i++) {
        min = i;
        for(j = i+1; j < 1000; j++) {
            if (tabela->iten[j].chave < tabela->iten[min].chave) {
                min = j;
            }
        }
        aux = tabela->iten[min].chave;
        tabela->iten[min].chave = tabela->iten[i].chave;
        tabela->iten[i].chave = aux;
    }
}

void questao03(Tabela *tabela) {
    int chave, i, seq, bin, contbin = 0, contsequen = 0;
 
    for(int j = 0; j < 100; j++) {
        chave = rand() % 1000 + 1;

        //chamando a pesquisa sequencial
        seq = sequencial(chave, tabela, &contsequen);
        //chamando a pesquisa binaria
        bin = binaria(chave, tabela, &contbin);

    }

    printf("Pesquisa sequencial: a média de registros percorridos por pesquisa eh %i\n", contsequen/100);
    printf("Pesquisa binaria: a média de registros percorridos por pesquisa eh %i\n", contbin/100);
}

int sequencial(int chave, Tabela *tabela, int *contsequen) {
    int j;
    //pesquisa sequencial
    tabela->iten[0].chave = chave;
    for( j = MAX; tabela->iten[j].chave != chave; j--) {
        *contsequen += 1;
    }
    if(tabela->iten[0].chave == chave) {
        tabela->iten[0].chave = 0;
    }
    return j;
    //pesquisa sequencial
}

//pesquisa binaria
int binaria(int chave, Tabela *tabela, int *contbin) {
    int i, esq, dir;
    tabela->tamanho = 1000;
    if(tabela->tamanho == 0) {
        return 0;
    }
    esq = 1;
    tabela->tamanho = 1000;
    dir = tabela->tamanho;
    do {
        *contbin += 1;
        i = (esq + dir) / 2;
        if (chave > tabela->iten[i].chave) {
            esq = i + 1;

        } else {
            dir = i - 1;
        }

    } while((chave != tabela->iten[i].chave) && (esq <= dir));
    if (chave == tabela->iten[i].chave) {
        return i;
    }
    else {
        return 0;
    }
}

//ver quantas vezes a o código se repete
int questao04(int codigo, Tabela *tabela) {
    int qtd = 0, i = 0;

    for(i = 0; i < tabela->tamanho; i++) {
        if(tabela->iten[i].chave == codigo) {
            qtd += 1;
        }
    }
    return qtd;
}
//função da questão 5 para remover o valor
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

//função 6 para verificação se ja existe o nome do carro
int questao06(char nome[], Tabela *tabela) {
    int j, comp;

    for( j = MAX; j > 0; j--) {
        comp = strcmp(tabela->iten[j].nomeCarro, nome);
        if(comp == 0) {
            return comp;
        }
    }

    return comp;
}

//questao07
void questao07(Tabela *tabela) {
    int registro = 0, comp, confirma;
    char nome[20];
    printf("\nDigite o codigo e em seguida o nome do veiculo\n");
    scanf("%d %s", &registro, nome);
    //scanf("%s", nome);

    comp = questao06(nome, tabela);
    if(comp == 0) {
        printf("Existem registros desse veículo. Digite 0 para cancelar e 1 para confirmar a insercao:\n");
        scanf("%d", &confirma);
    } else {
        printf("Não existem registros desse veículo. Digite 0 para cancelar e 1 para confirmar a insercao:\n");
        scanf("%d", &confirma);
    }
    switch(confirma) {
    case 0:
        printf("\nNao foi registrado\n");
        break;
    case 1:

        if(tabela->tamanho == MAX) {
            printf("Erro: tabela cheia\n");
        } else {
            tabela->tamanho += 1;
            tabela->iten[tabela->tamanho].chave = registro;
            strcpy(tabela->iten[tabela->tamanho].nomeCarro, nome);
            printf("\nCodigo do carro: %d, Nome do carro: %s\n", registro, tabela->iten[tabela->tamanho].nomeCarro);
            break;
        }
    }
}