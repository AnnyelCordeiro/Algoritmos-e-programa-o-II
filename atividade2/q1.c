/*1. A UFPI campus Picos realizou uma pesquisa com uma amostra 40 alunos para analisar
quantas vezes um aluno frequenta a biblioteca por mês. Faça um algoritmo que calcula a
frequência de respostas dos alunos. Esse programa deve ler uma sequência de números
inteiros com os valores entre 0 e 10 respondidos pelos alunos. A sequência finaliza quando for
digitado o valor -1. A seguir deve ser impresso a frequência de cada número de acordo o
exemplo a seguir*/

#include <stdio.h>

// vetor de 40 alunos
// cada aluno responde de 0 a 10
// calcular a frequencia da resposta

int main(){
    int respostas[41];
    int i=0,n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0;

    printf("Caso sua resposta seja = -1, o programa para");
    printf("\nDigite a sua resposta:\n");

    for(i=0;i<41;i++){
    scanf("%d", &respostas[i]);
            if(respostas[i]==-1){
                break;
            }
            if(respostas[i]==0){
                n0 += 1;
            }
            if(respostas[i]==1){
                n1 += 1;
            }
            if(respostas[i]==2){
                n2 += 1;
            }
            if(respostas[i]==3){
                n3 += 1;
            }
            if(respostas[i]==4){
                n4 += 1;
            }
            if(respostas[i]==5){
                n5 += 1;
            }
            if(respostas[i]==6){
                n6 += 1;
            }
            if(respostas[i]==7){
                n7 += 1;
            }
            if(respostas[i]==8){
                n8 += 1;
            }
            if(respostas[i]==9){
                n9 += 1;
            }
            if(respostas[i]==10){
                n10 += 1;
            
    }
}
    printf("%d %d",0, n0);
    printf("\n%d %d",1, n1);
    printf("\n%d %d",2, n2);
    printf("\n%d %d",3, n3);
    printf("\n%d %d",4, n4);
    printf("\n%d %d",5, n5);
    printf("\n%d %d",6, n6);
    printf("\n%d %d",7, n7);
    printf("\n%d %d",8, n8);
    printf("\n%d %d",9, n9);
    printf("\n%d %d",10, n10);

return 0;
}
