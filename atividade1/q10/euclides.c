#include <stdio.h>

int main()
{
  int a, b, tmp;

  scanf("%d", &a);
  scanf("%d", &b);

  if (a > b) {
    tmp = a;
    a = b;
    b = tmp;
  }

  while (b % a) {
    b -= a;

    if (a > b) {
      tmp = a;
      a = b;
      b = tmp;
    }
  }

  printf("mdc = %d\n", a);

  return 0;
}
