/*3. Faça um programa que converta um vetor de caracteres para maiúsculo. Esse programa deve ter uma função
com o seguinte protótipo:
void maiusculo(char *sPtr);
Dica: use *sPtr para dereferenciar cada caractere do vetor e ++sPtr para avançar para o próximo caractere*/

#include<stdio.h>
#include<string.h>

void maiusculo(char *sPtr);

int main(){
	char frase[30];
scanf("%[^\n]s", frase);
     
        maiusculo(frase);
    
}
void maiusculo(char *sPtr){
    for(int i=0; sPtr[i]!='\0';i++){
        
        if(sPtr[i] >= 97 && sPtr[i] <= 122){
            printf("%c", sPtr[i]-32);
        }
        else{
            printf("%c\n", sPtr[i]);
        }
    }
}