#include <stdio.h>

int main(void) {
    float loan, interest, monthly, monthlyinterest;

    printf("Enter total loan amount:");
    scanf("%f", &loan);

    printf("Enter interest rate:");
    scanf("%f", &interest);

    printf("Enter monthly payment:");
    scanf("%f", &monthly);


    monthlyinterest = interest / 12.0f;
    loan = (loan - monthly) * (1 + (monthlyinterest / 100));
    printf("\nBalance remaining after first payment:%.2f\n", loan);

    loan = (loan - monthly) * (1 + (monthlyinterest / 100));
    printf("\nBalance remaining after second payment:%.2f\n", loan);

    loan = (loan - monthly) * (1 + (monthlyinterest / 100));
    printf("\nBalance remaining after third payment:%.2f\n", loan);

    return 0;
}
