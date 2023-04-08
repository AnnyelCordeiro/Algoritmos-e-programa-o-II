#include<stdio.h>

int main(int m, int n){
    int d;
scanf("%i", &m);
scanf("%i", &n);
    d=(m,d);
    while (m%d!=0 || n%d!=0)
    {
       if (m > n) {
    d = m;
    m = n;
    n = d;
  }  else if (n > m)
  {
    d = m;
      m = n;
      n = d;
  }
  d--;
    }
    printf("mdc: %i", d);
    return d;
    
}