#include<stdio.h>


void preencheFibVetor(long long fibVetor[],int tamanho);

int main()
{
    int tamanho;
    long long vetor[1000];
    scanf("%d", &tamanho);
    preencheFibVetor(vetor, tamanho);
    return 0;
}
void preencheFibVetor(long long fibVetor[],int tamanho)
{
    long long int n, primeiro = 0, segundo = 1, c;
    int j;
    for(int i=1; i<=tamanho; i++, primeiro = 0, segundo = 1){
        scanf("%lld",&n);
        n=n+1;
        for ( c = 0 ; c < n ; c++ ){
            if (c <= 1) fibVetor[i] = c;
            else
            {
                fibVetor[i] = primeiro + segundo;
                primeiro = segundo;
                segundo = fibVetor[i];
            }
        }
        printf("Fib(%lld) = %lld\n",n-1,fibVetor[i]);
    }
}