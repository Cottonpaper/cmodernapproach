#include <stdio.h>

int main(void) {
    int shares;
    float priceshare, value, commission, rivalcommission;


    printf("Enter no. of shares and price per share: ");
    scanf("%d%f", &shares, &priceshare);

    value = shares * priceshare;
    if(value <= 2500.0f) {
        commission = 30.0f + (0.017 * value);
    }
    else if(value <= 6250.0f) {
        commission = 56.0f + (0.0066 * value);
    }
    else if(value <= 20000.0f) {
        commission = 76.0f + (0.0034f * value);
    }
    else if(value <= 50000.0f) {
        commission = 100.0f + (0.0022 * value);
    }
    else if(value <= 5000000.0f) {
        commission =  155.0f + (0.0011 * value);
    }
    else {
        commission = 255.0f + (0.0009f * value);
    }


    if(shares < 2000) {
        rivalcommission = 33.0f + (.03 * shares);
    }
    else {
        rivalcommission = 33.0f + (.02 * shares);
    }

    printf("Commission: $%.2f\nRival Commission: $%.2f\n", commission, rivalcommission);

    return 0;
}
