#include <stdio.h>

int main(void) {
    float x;


    x = 50.123456789;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3d\n", x);
    printf("%6.0d\n");

    return 0;
}
