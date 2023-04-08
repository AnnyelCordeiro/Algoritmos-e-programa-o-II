/*O problema da seleção campeã: Na Copa do Mundo, depois de uma fase de grupos,
dezesseis equipes disputam a Fase final, composta de quinze jogos eliminatórios. A figura
abaixo mostra a tabela de jogos da Fase final:
Na tabela de jogos, as dezesseis equipes finalistas são representadas por letras maiúsculas
(de A a P), e os jogos são numerados de 1 a 15. Por exemplo, o jogo 3 é entre as equipes
identificadas por E e F; o vencedor desse jogo enfrentará o vencedor do jogo 4, e o perdedor
será eliminado. A equipe que vencer os quatro jogos da Fase final será a campeã (por exemplo,
para a equipe K ser campeã ela deve vencer os jogos 6, 11, 14 e 15.
Tarefa
Dados os resultados dos quinze jogos da Fase final, escreva um programa que determine a
equipe campeã.
*/

#include<stdio.h>
#define p 15

int main(){
int i, partidas[p],cont=0,tx,ty;

for ( i = 0; i < 8; i+=2)
{
    scanf("%d %d", &tx, &ty);
    if (tx>ty)
    {
        partidas[cont]=i;
        cont++;
    }else{
        partidas[cont]=i+1;
        cont++;
    }
    for ( i = 0; i < 4; i++)
    {
       scanf("%d %d", &tx, &ty);
       if (tx>ty)
    {
        partidas[cont]=i;
        cont++;
    }else{
        partidas[cont]=i+1;
        cont++;
    } 
    }
    for ( i = 0; i < 2; i++)
    {
       scanf("%d %d", &tx, &ty);
       if (tx>ty)
    {
        partidas[cont]=i;
        cont++;
    }else{
        partidas[cont]=i+1;
        cont++;
    } 
    for ( i = 0; i ==1; i++)
    {
       scanf("%d %d", &tx, &ty);
       if (tx>ty)
    {
        partidas[cont]=i;
        cont++;
    }else{
        partidas[cont]=i+1;
        cont++;
    } 
    }
    
    printf("%c", partidas[cont] + 65);
   
    }
}
 
    

}