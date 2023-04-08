#include <stdio.h>
buscaMenor(int *v, int tamanho);

int main()
{
   
}
buscaMenor(int *v, int tamanho){
int a,b,c,d,e,tamanho, p, men,*v;
    scanf("%d", &tamanho);
    int *v[tamanho];
    for(a=0; a<tamanho; a++)
        scanf("%d", &*v[a]);
    men=*v[0];
    for(a=1; a<tamanho; a++)
    {
        if(men>*v[a])
        {
            men=*v[a];
            p=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", men, p);
    return 0;
}