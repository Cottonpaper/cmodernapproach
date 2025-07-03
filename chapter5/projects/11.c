#include <stdio.h>

int main(void) {
    int tens, ones;


    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &ones);

    if(tens == 1) {
        switch(ones) {
            case 0:
                printf("Ten\n");
                break;
            case 1:
                printf("Eleven\n");
                break;
            case 2:
                printf("Twelve\n");
                break;
            case 3:
                printf("Thirteen\n");
                break;
            case 4:
                printf("Fourteen\n");
                break;
            case 5:
                printf("Fifteen\n");
                break;
            case 6:
                printf("Sixteen\n");
                break;
            case 7:
                printf("Seventeen\n");
                break;
            case 8:
                printf("Eighteen\n");
                break;
            case 9:
                printf("Nineteen\n");
                break;
        }
    }
    else {
        switch(tens) {
            case 0:
                break;
            case 2:
                printf("Twenty");
                break;
            case 3:
                printf("Thirty");
                break;
            case 4:
                printf("Fourty");
                break;
            case 5:
                printf("Fifty");
                break;
            case 6:
                printf("Sixty");
                break;
            case 7:
                printf("Seventy");
                break;
            case 8:
                printf("Eighty");
                break;
            case 9:
                printf("Ninety");
                break;
        }
        switch(ones) {
            case 0:
                break;
            case 1:
                printf("-One");
                break;
            case 2:
                printf("-Two");
                break;
            case 3:
                printf("-Three");
                break;
            case 4:
                printf("-Four");
                break;
            case 5:
                printf("-Five");
                break;
            case 6:
                printf("-Six");
                break;
            case 7:
                printf("-Seven");
                break;
            case 8:
                printf("-Eight");
                break;
            case 9:
                printf("-Nine");
                break;
        }
        printf("\n");
    }

    return 0;
}
