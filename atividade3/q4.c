/*4. Um dos jogos de azar mais populares é um jogo de dados conhecido como "craps", que é
jogado em cassinos em todo o mundo. As regras do jogo são as seguintes:
Um jogador rola dois dados. Cada dado tem seis faces. Estas faces contêm 1, 2, 3, 4, 5 e 6
pontos. Assim que os dados descansam, a soma dos pontos nas duas faces no topo dos
dados é calculado. Se a soma for 7 ou 11 no primeiro lançamento, o jogador ganha. Se a
soma for 2, 3 ou 12 no primeiro lançamento (chamado "craps"), o jogador perde (ou seja, a
"casa" ganha). Se o a soma é 4, 5, 6, 8, 9 ou 10 no primeiro lançamento, então essa soma se
torna "Ponto" do jogador. Para ganhar, você deve continuar rolando os dados até que você
repita novamente seu ponto. O jogador perde rolando um 7 antes de fazer o ponto.
Escreva um programa modularizado que simula o jogo de "craps".
Veja exemplos da tela de saída da simulação:*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int jogadado();
int repeteponto();
int p;

int main(){
int d1,d2,rd;

srand(time(NULL));
d1=jogadado();
d2=jogadado();

rd=d1+d2;
printf("Dado 1 = %d Dado 2 = %d, Resultado = %d\n", d1, d2, rd);
    if (rd==7 || rd==11)
    {
     printf("Jogador ganhou\n");
    }else if (rd==2 ||rd==3 ||rd==12)
    {
        printf("Jogador perdeu\n");
    }else if(rd==4 || rd==5 || rd==6 || rd==8 || rd==9 || rd==10){

    repeteponto();  
    }
    
    
}

int jogadado(){
int d;
d=1+rand()%6;
return d;
}

int repeteponto(void){

    int rd,d1=0,d2=0,i=0;
    d1=jogadado();
    d2=jogadado();
do
{
    d1=jogadado();
    d2=jogadado();
    rd=d1+d2;
printf("Dado 1 = %d Dado 2 = %d, Resultado = %i\n", d1, d2, rd);
if (rd==7)
{
    printf("Dado 1 = %d Dado 2 = %d, Resultado = %i\n", d1, d2, rd);
    printf("Jogador perdeu\n");
}else if (rd==rd)
{
    printf("Dado 1 = %d Dado 2 = %d, Resultado = %i\n", d1, d2, rd);
    printf("Jogador ganhou\n");
}
break;
} while (rd!=7 || rd!=p);


}