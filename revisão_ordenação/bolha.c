#include <stdio.h>
#define tam 5
int main(){

    int i,cont,aux;
    int numeros[tam];

    printf("digite os numeros das chaves\n");

    for(i=0; i < tam ; i++){
        scanf("%d",&numeros[i]);
    }

    printf("numeros das chaves desordenados\n");

    for(i=0; i < tam ; i++){
        printf("%4d",numeros[i]);
    }

    printf("\n");

    for(cont=1; cont<tam;cont++){
        for(i=0;i < tam - 1; i++){
            if(numeros[i] < numeros[i + 1]){

                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }

        printf("numeros das chaves ordenados\n");


    for(i=0; i < tam ; i++){
        printf("%4d",numeros[i]);
    }
    printf("\n");
    return 0;

}