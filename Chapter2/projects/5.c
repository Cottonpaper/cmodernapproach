#include <stdio.h>

int main(void) {
    float x, polynomial;

    printf("Enter x:");
    scanf("%f", &x);

    polynomial = (
                (3 * (x * x * x * x * x)) +
                (2 * (x * x * x * x)) -
                (5 * (x * x * x)) -
                (x * x) +
                (7 * x) - 6
                );

    printf("Result is %f\n", polynomial);
}
