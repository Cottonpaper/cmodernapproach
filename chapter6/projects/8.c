#include <stdio.h>

int
main (void)
{
  int daysInMonth, startingDay;
  int day, column;


  printf("Enter number of days in month: ");
  scanf("%d", &daysInMonth);
  printf("Enter starting day of the week: ");
  scanf("%d", &startingDay);

  for (column = 1; column < startingDay; ++column)
    {
      printf("   ");
    }
  for (day = 1; day <= daysInMonth; ++day, ++column)
    {
      printf("%3d", day);

      if (column == 7)
        {
          printf("\n");
          column = 0;
        }
    }
  printf("\n");

  return 0;
}
