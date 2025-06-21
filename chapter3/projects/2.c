#include <stdio.h>

int main(void) {
    int itemnum, day, month, year;
    float unitprice;


    printf("Enter item number: ");
    scanf("%d", &itemnum);

    printf("Enter unit price: ");
    scanf("%f", &unitprice);
    while(unitprice > 9999.99) {
        printf("Maxmium unit price is 9999.99. Enter again: ");
        scanf("%f", &unitprice);
    }

    printf("Enter a purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("---------------------------------------------\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-3d\t\t$%6.2f\t\t%d/%d/%d\n", itemnum, unitprice, month, day, year);
}
