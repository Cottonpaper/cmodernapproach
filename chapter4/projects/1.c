#include <stdio.h>

int main(void) {
    int num;


    printf("Enter a two digit number to reverse: ");
    scanf("%d", &num);

    printf("The reverse is: %d%d\n", num % 10, num / 10);
}
