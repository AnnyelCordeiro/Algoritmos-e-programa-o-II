/*1. Faça um programa para calcular o cubo de um número usando chamada de parâmetros por referência. Esse
programa deve ter uma função seguindo o protótipo abaixo:
void cubo(int *nPtr);*/

#include<stdio.h>
#include<math.h>

void cubo(int *nPtr);

int main(){
int number,i;
for(i = 1; i != 0; i++){
    scanf("%d", &number);

    if(number==0){
        return 0;
}

cubo(&number);

printf("Numero ao cubo: %d\n", number);

}                             

}

void cubo(int *nPtr){
int number;
*nPtr=pow(*nPtr,3);

}