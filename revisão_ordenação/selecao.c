#include <stdio.h>
#define tam 5
int main(){
    int i=0,cont=0,posmenor=0,aux=0,j=0;
    int numeros[tam];

    printf("digite os numeros\n");

    for(i=0; i < tam ; i++){
            scanf("%d",&numeros[i]);
    }


    printf("numeros desordenados\n");
    for(i=0; i < tam;i++){
        printf("%4d",numeros[i]);
    }

    printf("\n");

    for(i=0; i < tam - 1; i++){
        posmenor = i;
        for(j = i + 1; j < tam; j++){
            if(numeros[j] < numeros[posmenor]){
                posmenor = j;
            }

        }

        aux= numeros[i];
        numeros[i]= numeros[posmenor];
        numeros[posmenor]= aux;
    }

    printf("numeros ordenados\n");

    for(i=0; i < tam ; i++){
            printf("%4d",numeros[i]);
    }


    return 0;
}