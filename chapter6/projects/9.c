#include <stdio.h>

int
main (void)
{
  float loan, interest, monthlyPayment, monthlyInterest;
  int numberOfPayments, i;


  printf ("Enter you total loan amount, your annual interest,"
          "your monthly payment, and the number of payments\n");
  printf("In the form: x x x x\n");
  scanf ("%f%f%f%d", &loan, &interest, &monthlyPayment,
        &numberOfPayments);

  monthlyInterest = 1 + ((interest / 12.0f) / 100);
  for (i = numberOfPayments; i != 0; --i)
    {
      loan = loan * monthlyInterest;
      loan -= monthlyPayment;
    }
  printf("Amount left on loan after %d monthly payments: %.2f\n",
          numberOfPayments, loan);

  return 0;
}
