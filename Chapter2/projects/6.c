#include <stdio.h>

int main(void) {
    float x, polynomial;

    printf("Enter x:");
    scanf("%f", &x);

    polynomial = (
                ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6
                );

    printf("Result is %f\n", polynomial);
}
