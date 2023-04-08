/*2. Distância entre dois pontos (questão 2 da atividade 3): Escreva uma função distância que calcule a distância
entre dois pontos p1 e p2. Para isso a função deve utilizar uma estrutura (TAD) do tipo ponto composta pelos
valores de ponto flutuante x e y. Escreva um programa que recebe como entrada os valores para dois pontos e
utiliza a função para calcular a distância entre os pontos. Funções da biblioteca math.h, por exemplo sqrt, podemser utilizadas na função. Mostre conforme no exemplo com 4 casas decimais.
A entrada consiste em 2 conjuntos de 2 valores indicando respectivamente x1 x2 e y1 y2. A saída deve ser
apresentada em uma linha com a quebra de linha no final como no exemplo*/

#include<stdio.h>
#include<math.h>

#define  n 2 
typedef struct 
{
    float u;
    float d;
}Pontos;

int main(){
Pontos p[n];
int i;
float resultado;
for (i = 0; i < n; i++)
{
  printf("Digite o ponto x:\n");
     scanf("%f %f", &p[i].u, &p[i].u);
  printf("Digite o ponto y:\n");
     scanf("%f %f", &p[i].d, &p[i].d);

 resultado = sqrt((pow(p[0].u-p[1].u,2)+pow(p[0].d-p[1].d,2)));
}
printf("Resultado: %f ", resultado);

}