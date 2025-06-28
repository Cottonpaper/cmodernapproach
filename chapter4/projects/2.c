#include <stdio.h>

int main(void) {
    int num;


    printf("Enter a three digit number to reverse: ");
    scanf("%d", &num);

    printf("The reverse is: %d%d%d\n", num % 10, (num / 10) % 10, num / 100);
}
