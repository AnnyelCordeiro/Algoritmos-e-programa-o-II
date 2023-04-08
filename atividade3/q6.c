/*6. Escreva um programa modularizado que use geração de números aleatórios para criar
frases. O programa deve usar quatro matrizes de caracteres: artigo, substantivo, verbo e
preposição. O programa deve criar uma frase selecionando uma palavra aleatoriamente de
cada matriz na seguinte ordem: artigo, substantivo, verbo, preposição, artigo e substantivo.
Enfim, o programa deverá concatenar às palavras em um vetor que seja suficientemente
grande para conter a frase inteira. As palavras devem ser separadas por espaços. A frase
final deve ser impressa na tela iniciando com uma letra maiúscula e terminando com um
ponto. O programa deve gerar 20 frases aleatórias. As matrizes devem ser preenchidas
como se segue:
• A matriz artigo deve conter "o", "um", "algum", "todo" e "qualquer";
• A matriz substantivo deve conter "menino", "homem", "cachorro", "carro", "gato";
• A matriz verbo deve conter "passou", "pulou", "correu", "saltos", "andou";
• A matriz preposição deve conter "sobre", "sob", "ante", "ate", "com".*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char art[][20] = {"o", "um", "algum", "todo", "qualquer"};
char sub[][20] = { "menino", "homem", "cachorro", "carro", "gato"};
char verbo[][20] = { "passou", "pulou", "correu", "saltos", "andou"};
char prepo[][20] = { "sobre", "sob", "ante", "ate", "com"};

int sortear();
void criaFrase(char frase[]);
int concatena(char frase[], char palavra[], int p);

int main() {
  char frase[100],i;  

  srand( (unsigned) time(NULL) );

  for (i = 0; i < 20; i++)
  {
    criaFrase(frase);
    printf("Frase: %s\n", frase);
  }
  
  return 0;
}

void criaFrase(char frase[]){
  int s, p = 0;

  s = sortear();
  p = concatena(frase, art[s], p);

  s = sortear();
  p = concatena(frase, sub[s], p);

  s = sortear();
  p = concatena(frase, verbo[s], p);

  s = sortear();
  p = concatena(frase, prepo[s], p);

  s = sortear();
  p = concatena(frase, art[s], p);

  s = sortear();
  p = concatena(frase, sub[s], p);

  frase[0] -= 32;
  frase[p-1] = '.';
  frase[p] = '\0';

}

int sortear(){
    int s = rand()%5;
    //printf("s: %i\n", s);    
    return s;
}

int concatena(char frase[], char palavra[], int p) {
    int i = 0;
    
    while( palavra[i] != '\0' ){
        frase[p] = palavra[i];
        i++;
        p++;
    }
    frase[p] = ' ';
    p++;    
    return p;
}