#include <stdio.h>

int main(void) {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
    int firstsum, secondsum;

    printf("Enter UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);

    firstsum = n1 + n3 + n5 + n7 + n9 + n11;
    secondsum = n2 + n4 + n6 + n8 + n10;
    secondsum += firstsum *= 3;
    --secondsum;

    printf("Check digit should be: %d\n", 9 - (secondsum % 10));
}
