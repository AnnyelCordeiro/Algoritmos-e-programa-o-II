/*2. Escreva uma função distância que calcule a distância entre dois pontos. A função recebe
como parâmetros os valores x1 e y1, representando ponto1, e os valores x2 e y2
representando ponto2. Todos os parâmetros de entrada e o retorno da função devem ser do
tipo float. Escreva um programa que recebe os quatro números da entrada padrão
representando respectivamente x1, y1, x2 e y2 e utiliza a função distância para calcular a
distância entre os pontos. Funções da biblioteca math.h, por exemplo sqrt, podem ser
utilizadas na função.*/

#include <stdio.h>
#include <math.h>

float distancia(int x1,int y1, int x2, int y2);

int main(){
  int x1,y1,x2,y2;
  float dist;

  printf("informe a primeira ordenada");
  scanf("%i %i", &x1, &y1);
  printf("informe a segunda ordenada");
  scanf("%i %i", &x2, &y2);

  dist=distancia(x1,y1,x2,y2);

  printf("%f", dist);
  return 0;
}

float distancia(int x1,int y1, int x2, int y2){
  float d;
  
  d = sqrt((pow(x2-x1,2)+pow(y2-y1,2)));

  return d;
/* d=√((x_2-x_1)²+(y_2-y_1)²)*/
}