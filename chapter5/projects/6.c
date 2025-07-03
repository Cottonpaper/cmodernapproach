#include <stdio.h>

int main(void) {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
    int firstsum, secondsum, check;

    printf("Enter UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);

    firstsum = n1 + n3 + n5 + n7 + n9 + n11;
    secondsum = n2 + n4 + n6 + n8 + n10;
    check = secondsum + firstsum * 3;
    --check;
    check = 9 - (check % 10);

    if(check == n12) {
        printf("VALID\n");
    }
    else {
        printf("INVALID\n");
    }

    return 0;
}
