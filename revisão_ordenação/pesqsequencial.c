int sequencial(int chave, Tabela tabela, intcontsequen) {
    int j;
    //pesquisa sequencial
    tabela->iten[0].chave = chave;
    for( j = MAX; tabela->iten[j].chave != chave; j--){ //J vai o valor total do vetor, ele vai percorre do
        *contsequen += 1;                               // valor maximo ate 0 ou ate encontar o codigo
    }
    if(tabela->iten[0].chave == chave) {                //Se o J foi percorrido até 0, e tabela iten == a chave 
        tabela->iten[0].chave = 0;                      // a posicaão 0 recebe 0, e o codigo retornado é 0
    }
    return j;
    //pesquisa sequencial
}