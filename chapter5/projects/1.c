#include <stdio.h>

int main(void) {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 10) {
        printf("Number has 1 digit.\n");
        return 0;
    }
    else if(num < 100) {
        printf("Number has 2 digits.\n");
        return 0;
    }
    else if(num < 1000) {
        printf("Number has 3 digits.\n");
        return 0;
    }
    else if(num < 10000) {
        printf("Number has 4 digits.\n");
        return 0;
    }
    else {
        printf("Out of range.\n");
        return 1;
    }
}
