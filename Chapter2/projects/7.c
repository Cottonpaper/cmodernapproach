#include <stdio.h>

int main(void) {
    int dollaramount;
    int twentys, tens, fives, ones;

    printf("Enter a dollar amount:");
    scanf("%d", &dollaramount);

    twentys = dollaramount / 20;
    dollaramount = dollaramount - (20 * twentys);

    tens = dollaramount / 10;
    dollaramount = dollaramount - (10 * tens);

    fives = dollaramount / 5;
    dollaramount = dollaramount - (5 * fives);

    ones = dollaramount / 1;
    dollaramount = dollaramount - ones;

    printf("\n$20 Bills:%d\n$10 Bills:%d\n$5 Bills:%d\n$1 Bills:%d\n", twentys, tens, fives, ones);
}
