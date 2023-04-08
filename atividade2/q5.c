#include<stdio.h>

int main()
{
    char nome[5][20];
    int ma, mp, mi;
    float medidas[5][3];
    float Ma, Mp, Mi;
    float media[3];

    for(int i = 0; i < 5; i ++)
    {

        printf("\nNome do Aluno %i: ", i+1);

        scanf("%s", &nome[5][20]);

        printf("Digite a Altura, peso e IRA respectivamente: \n");

        for(int j = 0; j <3; j++)
        {

            scanf("%f", &medidas[i][j]);

        }
    }

    printf("\n");

    printf("%10s%10s%9s\n","Altura","peso","IRA");

    for(int j = 0; j < 5; j ++)
    {
        printf("\n");
        for(int i= 0; i<3; i++)
        {
            printf("%10.2f",medidas[j][i]);
        }
    }
    printf("\n");
//Altura
    for(int i = 0; i < 5; i++)
    {
        media[0] = media[0] + medidas[i][0];
        int a;
        if( a == 0)
        {
            Ma = medidas[i][0];
            a++;
        }
        if(medidas[i][0] > Ma)
        {
            Ma = medidas[i][0];
            ma = i;
        }
    }
    media[0] = media[0]/5;
    printf("\n Media da Altura %.2f\n", media[0]);
//Peso
    for(int i = 0; i < 5; i++)
    {
        media[1] = media[1] + medidas[i][1];
        int a;
        if( a == 0)
        {
            Mp = medidas[i][1];
            a++;
        }
        if(medidas[i][1] > Mp)
        {
            Mp = medidas[i][1];
            mp = i;
        }
    }
    media[1] = media[1]/5;
    printf("\n Media do Peso %.2f\n", media[1]);
//IRA
    for(int i = 0; i < 5; i++)
    {
        media[2] = media[2] + medidas[i][2];
        int a;
        if( a == 0)
        {
            Mi = medidas[i][2];
            a++;
        }
        if(medidas[i][2] > Mi)
        {
            Mi = medidas[i][2];
            mi = i;
        }
    }
    media[2] = media[2]/5;
    printf("\n Media do IRA %.2f\n", media[2]);
    printf("\nMaior Altura: %.2f do Aluno %s", Ma, nome[ma]);
    printf("\nMaior Peso: %.2f do Aluno %s", Mp, nome[mp]);
    printf("\nMaior IRA: %.2f do Aluno %s", Mi, nome[mi]);
}