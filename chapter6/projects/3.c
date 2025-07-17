#include <stdio.h>

int
main (void)
{
  int numerator, denominator, remainder;
  int m, n;


  printf ("Enter a fraction: ");
  scanf ("%d / %d", &numerator, &denominator);

  if (numerator == 0)
    {
      printf("Reduced fraction: 0\n");
      return 0;
    }
  else if (denominator == 0)
    {
      printf("Division by 0 is undefined.\n");
      return 0;
    }

  m = numerator;
  n = denominator;

  do
    {
      remainder = m % n;
      m = n;
      n = remainder;
    }
  while (n != 0);

  if ((denominator / m) == 1)
    printf("Reduced fraction: %d\n", numerator / m);
  else
    printf("Reduced fraction: %d / %d\n", numerator / m, denominator / m);

  return 0;
}
