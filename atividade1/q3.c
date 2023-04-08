#include<stdio.h>

void main(){
 char letra;
 int n;   
    printf("Para passagem de ida digite '0' \n Para  passagem ida e volta digite '1'");
    printf("\n tecle 'a' para região norte");
    printf("\n tecle 'b' para região nordeste");
    printf("\n tecle 'c' para regiao centro-oeste");
    printf("\n tecle 'd' para região sul");
    printf("\n qual a região que voce vai viajar?");
           scanf("%c", &letra);
        printf("\n passagemde ida ou ida e volta");
           scanf("%i", &n);
    
    switch(letra){
        case 'a':
        if(n==0){
         printf("a passagem será 500 reais");   
        }else if(n==1){
        printf("a passagem será 900 reais");
        }break;
        case 'b':
        if(n==0){
         printf("a passagem será 350 reais");   
        }else if(n==1){
        printf("a passagem será 650 reais");
        }break;
        case 'c':
        if(n==0){
         printf("a passagem será 350 reais");   
        }else if(n==1){
        printf("a passagem será 600 reais");
        }break;
        case 'd':
        if(n==0){
         printf("a passagem será 300 reais");   
        }else if(n==1){
        printf("a passagem será 550 reais");
        }break;
    }
    
}
