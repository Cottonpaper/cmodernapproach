#include <stdio.h>

int main(void) {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13;
    int firstsum, secondsum;

    printf("Enter EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13);

    firstsum = n2 + n4 + n6 + n8 + n10 + n12;
    secondsum = n1 + n3 + n5 + n7 + n9 + n11;
    secondsum += firstsum *= 3;
    --secondsum;

    printf("Check digit should be: %d\n", 9 - (secondsum % 10));
}
