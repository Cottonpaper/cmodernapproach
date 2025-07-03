#include <stdio.h>

int main(void) {
    float income, taxdue;


    printf("Enter taxable income: ");
    scanf("%f", &income);

    if(income <= 750.0f) {
        taxdue = income * 0.01f;
    }
    else if(income <= 2250.0f) {
        taxdue = ((income - 750.0f) * 0.02f) + 7.50f;
    }
    else if(income <= 3750.0f) {
        taxdue = ((income - 2250.0f) * 0.03f) + 37.50f;
    }
    else if(income <= 5250.0f) {
        taxdue = ((income - 3750.0f) * 0.04f) + 82.50f;
    }
    else if(income <= 7000.0f) {
        taxdue = ((income - 5250.0f) * 0.05f) + 142.50f;
    }
    else {
        taxdue = ((income - 7000.0f) * 0.06f) + 230.0f;
    }

    printf("Taxes due: $%.2f\n", taxdue);
    return 0;
}
