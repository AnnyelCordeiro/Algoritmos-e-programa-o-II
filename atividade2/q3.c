/*Faça um algoritmo que mostra a forma que o personagem "Cebolinha" da turma da Mônica
fala, ou seja, troca a letra "r" por "l". Esse programa deve receber uma palavra de até 20
caracteres, realizar a referida troca e informar o número do(s) caractere(s) onde ocorre(m)
trocas, da seguinte forma:*/

#include <stdio.h>
#define MAX 20

int main(){
	char nome[MAX];
	int i=0;
	scanf("%[^\n]s", nome);
	
	while(nome[i] != '\0'){
		if(nome[i]=='r'){
			nome[i]='l';
		}
		if(nome[i]=='R'){
			nome[i]='L';
           
		}	if (nome[i]=='l' || nome[i]=='L')
        {
             printf("local de troca: %i\n", i);
        }
        
       
		i++;
	}
	printf("%s\n",nome);
    
	return 0;
}