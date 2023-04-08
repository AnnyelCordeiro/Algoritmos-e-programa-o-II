#include <stdio.h>
#include <string.h>

int main ()
{
  char digito, numeroNegociado[200];
  int n, i, j;

  scanf("%c", &digito);
  scanf("%s", numeroNegociado);

  while (digito != '0')
  {
      if (digito != '0')
      {
        n = strlen(numeroNegociado);
        for (i = 0; i < n; i++)
	    {
            if (numeroNegociado[i] == digito)
	        {
                for (j = i; j < n; j++)
                numeroNegociado[j] = numeroNegociado[j+1];
                numeroNegociado[n-1] = 0;
                n--;
                i--;
            } 
        }

        for (i = 0; i < n-1; i++)
	    {
            if (numeroNegociado[i] == '0')
	        {
                for (j = i; j < n; j++)
                numeroNegociado[j] = numeroNegociado[j+1];
                numeroNegociado[n-1] = 0;
                n--;
                i--;
            }
	        else
                break;
        }

        if (n == 0)
	    {
            numeroNegociado[0] = '0';
            numeroNegociado[1] = '\0';
        }

        printf("%s\n", numeroNegociado);

        scanf(" %c", &digito);
        scanf("%s", numeroNegociado);
      }
  }
  return 0;
}