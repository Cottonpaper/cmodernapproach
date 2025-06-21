#include <stdio.h>

int main(void) {
    int one, two, three, four, five, six, seven, eight,
        nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
    int row1, row2, row3, row4;
    int column1, column2, column3, column4;


    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
            &one, &two, &three, &four, &five, &six, &seven, &eight,
            &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

    printf("%d\t%d\t%d\t%d\n", one, two, three, four);
    printf("%d\t%d\t%d\t%d\n", five, six, seven, eight);
    printf("%d\t%d\t%d\t%d\n", nine, ten, eleven, twelve);
    printf("%d\t%d\t%d\t%d\n", thirteen, fourteen, fifteen, sixteen);

    row1 = one + two + three + four;
    row2 = five + six + seven + eight;
    row3 = nine + ten + eleven + twelve;
    row4 = thirteen + fourteen + fifteen + sixteen;

    column1 = one + five + nine + thirteen;
    column2 = two + six + ten + fourteen;
    column3 = three + seven + eleven + fifteen;
    column4 = four + eight + twelve + sixteen;

    printf("Row sums: %d, %d, %d, %d\n", row1, row2, row3, row4);
    printf("Column sums: %d, %d, %d, %d\n", column1, column2, column3, column4);
    printf("Diagonal sums: %d, %d\n", one + six + eleven + sixteen, four + seven + ten + thirteen);

    return 0;
}
