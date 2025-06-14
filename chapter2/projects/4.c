#include <stdio.h>

#define FIVEPERCENT_TAX 1.05f;

int main(void) {
    float value, taxvalue;

    printf("Enter an amount:");
    scanf("%f", &value);

    taxvalue = value * FIVEPERCENT_TAX;
    printf("With tax added:%f\n", taxvalue);
}
