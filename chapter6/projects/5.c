#include <stdio.h>

int
main (void)
{
  int n;


  printf("Enter a number to reverse: ");
  scanf("%d", &n);

  do
    {
      printf("%d", n % 10);
      n /= 10;
    }
  while(n != 0);
  printf("\n");

  return 0;
}
