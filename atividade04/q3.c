/* Embaralhamento de cartas: Faça um programa que simule o embaralhamento de cartas de um baralho francês
com um deck de 52 cartas. Esse tipo de baralho possui 4 naipes (paus, ouros, copas e espadas) e treze cartas
iniciando do Às (valor 1), os valores 2 até 10, o valete, a dama e o rei. O programa deve usar uma estrutura carta
com os componentes naipe e valor. Esses componentes devem ser representados pelos seus respectivos nomes,
por exemplo, valores “Às”, “Seis”, “Rei” e naipes “Copas”, “Paus”.
O programa deve inicialmente iniciar um deck de 52 cartas do baralho e solicitar ao usuário um número referente
ao tipo de exibição. Caso seja digitado 1 será impresso em ordem do Às ao Rei para Paus, Ouros, Copas e
Espadas. O nome das cartas deve ser completo no formato “<valor> de <naipe>”, uma carta por linha*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define max 50
#define qnaipe 4
#define qvalores 13
#define qcartas 52

int sorteaNumero();

struct Carta
{
  char naipe[max];
  char valor[max];
};

void montarbaralho();
void imprimeCartas(int numero);
void embaralhar();

char naipe[qnaipe][max] = {"Paus", "Ouros", "Copas", "Espadas"};
char valor[qvalores][max] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove" ,"Dez", "Valete", "Dama", "Rei"};

struct Carta deck[qcartas];

int main() {
  
  int numero;
  srand( (unsigned) time(NULL) ); 

  montarbaralho();
  printf("Digite 1 para cartas organizadas\n");
  printf("Digite 0 para embaralhar \n");
  scanf("%d", &numero);

  imprimeCartas(numero);

  printf("\n");

  return 0;
}

int sorteaNumero(){

    return rand() % 52;

}

void montarbaralho(){
  int i, j, cont = 0;

  for (i = 0; i < qnaipe; i++)
  {
    for (j = 0; j < qvalores; j++)
    {
      strcpy(deck[cont].valor, valor[j]);
      strcpy(deck[cont].naipe, naipe[i]);
      cont++;
    }
  }
}

void embaralhar(){
  int i, numero;
  struct Carta cartaux;
  

  for (i = 0; i < qcartas; i++)
  {
    numero = sorteaNumero();

    strcpy(cartaux.valor, deck[numero].valor);
    strcpy(cartaux.naipe, deck[numero].naipe);
  
    strcpy(deck[numero].valor, deck[i].valor);
    strcpy(deck[numero].naipe, deck[i].naipe);

    strcpy(deck[i].valor, cartaux.valor);
    strcpy(deck[i].naipe, cartaux.naipe);

  }
  
}

void imprimeCartas(int numero){
  int i;
  switch (numero)
  {
  case 0:
    embaralhar();
    for ( i = 0; i < qcartas; i++)
    {
      printf("%s de %s\n", deck[i].valor, deck[i].naipe);
    }
    break;
  case 1:
    for ( i = 0; i < qcartas; i++)
    {
      printf("%s de %s\n", deck[i].valor, deck[i].naipe);
    }
    break;  
  }
}