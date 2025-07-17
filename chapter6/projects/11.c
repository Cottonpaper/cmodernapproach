#include <stdio.h>

int
main (void)
{
  int n, i, factorial;
  float e;


  printf("Enter *n* times to calculate e: ");
  scanf("%d", &n);

  e = 1.0f;
  for (factorial = 1, i = 1; i <= n; ++i)
    {
      e += 1.0f / (factorial *= i);
    }

  printf("%f\n", e);

  return 0;
}
