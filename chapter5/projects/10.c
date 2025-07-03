#include <stdio.h>

int main(void) {
    int num, tens;


    printf("Enter numerical grade: ");
    scanf("%d", &num);

    if(num > 100 || num < 0) {
        printf("Error\n");
    }
    else if(num == 100) {
        printf("A\n");
    }
    else {
        tens = (num / 10) % 10;

        switch (tens) {
            case 0:
                printf("F\n");
                break;
            case 1:
                printf("F\n");
                break;
            case 2:
                printf("F\n");
                break;
            case 3:
                printf("F\n");
                break;
            case 4:
                printf("F\n");
                break;
            case 5:
                printf("F\n");
                break;
            case 6:
                printf("D\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 9:
                printf("A\n");
                break;
        }
    }

    return 0;
}
