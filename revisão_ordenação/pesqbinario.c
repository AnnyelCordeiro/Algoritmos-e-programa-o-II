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