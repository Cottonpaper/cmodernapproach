#include <stdio.h>

int
main (void)
{
  int i, factorial;
  float e, n, term;


  printf("Enter max term: ");
  scanf("%f", &n);

  e = 1.0f;
  factorial = i = 1;
  while (1)
    {
      term = 1.0f / (factorial *= i);
      if (term < n)
        break;

      e += term;
      ++i;
    }

  printf("%f\n", e);

  return 0;
}
