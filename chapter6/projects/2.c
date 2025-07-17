#include <stdio.h>

int
main (void)
{
  int m, n, remainder;


  printf ("Enter two integers: ");
  scanf ("%d%d", &m, &n);

  if (n == 0)
    {
      printf ("Greatest common divisor is %d\n", m);
    }
  else
    {
      do
        {
          remainder = m % n;
          m = n;
          n = remainder;
        }
      while (n != 0);

      printf("Greatest common divisor is %d\n", m);
    }

  return 0;
}
