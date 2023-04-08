#include <stdio.h>
#define tam 5
int main(){
    int i=0,j=0,cont=0;
    float aux, v[tam];

    for(cont=0; cont < tam;cont++){
        scanf("%f",&v[cont]);
    }

    // ordenação por inserção

    for(i=1 ; i < tam;i++){

    aux = v[i];

    for(j = i - 1;(j >= 0) && (v[j] > aux );j--){

        v[j+1]=v[j];

    }

    v[j+1] = aux;

    }
 //exibição em ordem crescente

    for(cont=0; cont < tam;cont++){

        printf("      %.2f",v[cont]);
    }


    return 0;
}