/*. Estatísticas sobre estudantes (questão 5 – atividade 2): faça um programa que receba o primeiro nome (até 20
caracteres), a altura, o peso e o IRA (índice de rendimento acadêmico) de 5 estudantes. O programa deve
armazenar os dados em uma estrutura (tipo abstrato de dados – TAD). Apos ler os dados, o programa deve
calcular e imprimir para cada tipo de medida dos alunos a média aritmética.
Media de peso: xx.xxx
Media de altura: xx.xxx
Media de IRA: xx.xx
Por fim, o programa deve imprimir o nome e medida, para os alunos com o maior desses valores. A impressão
deve seguir a seguinte formatação, onde “aaaaaa” é o nome do estudante e xx.xxx é a referida medida do
estudante:
Maior peso: aaaaaa (xx.xxx)
Maior altura: aaaaaa (xx.xxx)
Maior CRA: aaaaaa (xx.xxx)*/

#include<stdio.h>

#define q_alunos 5
typedef struct 
{
    char name[20];
    float h;
    float peso;
    float ira;
}Estudantes;
//void media();


int main(){

int indice_maior_altura, indice_maior_peso, indice_maior_ira;
Estudantes aluno[q_alunos];
int i,aux;
float ma,mp,mi;
float mediah = 0,mediapeso = 0,mediaira = 0,Mp,Ma,Mi;
for ( i = 0; i < q_alunos; i++)
{
    printf("Nome:\n");
      scanf("%s", aluno[i].name );
    printf("Altura:\n");
      scanf("%f", &aluno[i].h);
    printf("Peso:\n");
      scanf("%f", &aluno[i].peso);
    printf("IRA:\n");
      scanf("%f", &aluno[i].ira);  


}
for ( i = 0; i < q_alunos; i++)
{
mediah+=aluno[i].h/q_alunos;
mediapeso+=aluno[i].peso/q_alunos;
mediaira+=aluno[i].ira/q_alunos;


 if( aux == 0)
        {
            ma= aluno[i].h;
            mp=  aluno[i].peso;
            mi= aluno[i].ira;            
            aux++;
        }
        if(aluno[i].h> ma)
        {
            ma= aluno[i].h;
            indice_maior_altura = i;
        }
        if(aluno[i].peso> mp)
        {
            mp= aluno[i].peso;
            indice_maior_peso = i;
        }
        if(aluno[i].ira> mi)
        {
            mi= aluno[i].ira;
            indice_maior_ira = i;
        }



}
printf("Media da altura: %f ", mediah);
printf("Media do peso: %f ", mediapeso);
printf("Media do IRA: %f\n ", mediaira);

printf("\nMaior Altura: %.2f do Aluno %s", ma, aluno[indice_maior_altura].name);
printf("\nMaior Peso: %.2f do Aluno %s", mp, aluno[indice_maior_peso].name);
printf("\nMaior IRA: %.2f do Aluno %s", mi, aluno[indice_maior_ira].name);

}
