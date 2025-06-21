#include <stdio.h>

int main(void) {
    int gs1, groupid, pubcode, itemnum, checkdigit;


    printf("Enter ISBN: ");
    scanf("%d - %d - %d - %d - %d", &gs1, &groupid, &pubcode, &itemnum, &checkdigit);

    printf("GS1 prefix: %d\nGroup Identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", 
            gs1, groupid, pubcode, itemnum, checkdigit);
}
