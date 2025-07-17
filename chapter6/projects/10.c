#include <stdio.h>

int
main (void)
{
  int month, day, year;
  int month2, day2, year2;


  printf("Enter a date (mm/dd/yy): ");
  scanf("%d / %d / %d", &month, &day, &year);

  if (month == 0 && day == 0 && year == 0)
    {
      printf("No dates entered. Exiting...\n");
    }
  else
    {
      while(1)
        {
          printf("Enter a date: ");
          scanf("%d / %d / %d", &month2, &day2, &year2);

          if (month2 == 0 && day2 == 0 && year2 == 0)
            break;
          if (   (year2 < year)
              || (year2 == year && month2 < month)
              || (year2 == year && month2 == month && day2 < day))
            {
              month = month2;
              day = day2;
              year = year2;
            }
        }

      printf("Earliest date is: %d / %d / %d\n", month, day, year);
    }

  return 0;
}
