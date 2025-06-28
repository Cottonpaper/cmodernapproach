#include <stdio.h>

int main(void) {
    int first, second, third;


    printf("Enter a three digit number to reverse: ");
    scanf("%1d%1d%1d", &first, &second, &third);

    printf("Reversed number is: %d%d%d\n", third, second, first);
}
