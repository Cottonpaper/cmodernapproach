#include <stdio.h>

int main(void) {
    int num;


    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    printf("Octal is: %d%d%d%d%d\n", ((((num / 8) / 8) / 8) / 8) % 8, 
                        (((num / 8) / 8) / 8) % 8,
                        ((num / 8) / 8) % 8,
                        (num / 8) % 8,
                        num % 8);
}
