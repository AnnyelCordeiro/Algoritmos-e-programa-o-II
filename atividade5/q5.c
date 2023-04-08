/* . Faça um programa que simule o embaralhamento de cartas, assim como a questão 3 da atividade04. Esse
programa deve usar a estrutura Carta com os campos face e naipe ter funções seguindo os protótipos:
void preenche( Carta *deck, char *face[ ], char *naipe[ ] );
void embaralha( Carta *deck );
void imprime( Carta *deck );*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define max 50
#define qnaipe 4
#define qvalores 13
#define qcartas 52

int numero;

typedef struct 
{
  char *naipe;
  char *valor;
}Carta;

int sorteaNumero();
void preenche( Carta *deck, char *face[ ], char *naipe[ ] );
void imprime( Carta *deck );
void embaralha( Carta *deck );


int main() {
  Carta deck[qcartas];
  char *naipe[qnaipe] = {"Paus", "Ouros", "Copas", "Espadas"};
  char *valor[qvalores] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove" ,"Dez", "Valete", "Dama", "Rei"};

  
  srand( (unsigned) time(NULL) ); 

  preenche(deck,valor,naipe );
  printf("Digite 1 para cartas organizadas\n");
  printf("Digite 0 para embaralhar\n");
  scanf("%d", &numero);

  imprime(deck);

  printf("\n");

  return 0;
}

int sorteaNumero(){

    return rand() % 52;

}

void preenche( Carta *deck, char *face[ ], char *naipe[ ] ){
  int i, j, cont = 0;

  for (i = 0; i < qnaipe; i++)
  {
    for (j = 0; j < qvalores; j++)
    {
      deck[cont].valor = face[j];
      deck[cont].naipe = naipe[i];
      cont++;
    }
  }
}

void embaralha( Carta *deck ){
  int i, numero;
  Carta cartaux;
  

  for (i = 0; i < qcartas; i++)
  {
    numero = sorteaNumero();

    cartaux.valor = deck[numero].valor;
    cartaux.naipe = deck[numero].naipe;
  
    deck[numero].valor = deck[i].valor;
    deck[numero].naipe = deck[i].naipe;

    deck[i].valor = cartaux.valor;
    deck[i].naipe = cartaux.naipe;

  }
  
}
//imprime o baralho
void imprime( Carta *deck ){
  int i;
  switch (numero)
  {
  case 0:
    embaralha(deck);
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