#include <stdio.h>

int
main (void)
{
  float value, commission;


  do
    {
      printf ("Enter value of trade: ");
      scanf ("%f", &value);

      if (value == 0)
        continue;

      if(value <= 2500.0f)
        {
          commission = 30.0f + (0.017 * value);
        }
      else if(value <= 6250.0f)
        {
          commission = 56.0f + (0.0066 * value);
        }
      else if(value <= 20000.0f)
        {
          commission = 76.0f + (0.0034f * value);
        }
      else if(value <= 50000.0f)
        {
          commission = 100.0f + (0.0022 * value);
        }
      else if(value <= 5000000.0f)
        {
          commission =  155.0f + (0.0011 * value);
        }
      else
        {
          commission = 255.0f + (0.0009f * value);
        }

      if (commission < 39.00f)
        commission = 39.00f;

      printf("Commission: $%.2f\n", commission);
    }
  while (value != 0);

  return 0;
}
