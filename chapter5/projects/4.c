#include <stdio.h>

int main(void) {
    float speed;


    printf("Enter wind speed in knots: ");
    scanf("%f", &speed);

    if(speed <= 1.0f) {
        printf("Calm wind speed\n");
    }
    else if(speed <= 3.0f) {
        printf("Light air wind speed\n");
    }
    else if(speed <= 27.0f) {
        printf("Breeze wind speed\n");
    }
    else if(speed <= 47.0f) {
        printf("Gale wind speed\n");
    }
    else if(speed <= 63.0f) {
        printf("Storm wind speed\n");
    }
    else {
        printf("Hurricane wind speed\n");
    }

    return 0;
}
