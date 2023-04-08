#include <stdio.h>
#define m 4
#define n 6
#define p 8

int main(){
	int i,j;
    int a[m][n],b[n][p],c[m][p];

for ( i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        scanf("%d", &a[i][j]);
    }
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < p; j++)
        {
            scanf("%i", &b[i][j]);
        }
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < p; j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            printf("%i", c[i][j]);
        }
        
    }
    
}

}   