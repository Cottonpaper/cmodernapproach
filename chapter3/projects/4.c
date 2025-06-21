#include <stdio.h>

int main(void) {
    int areacode, prefix, linenum;


    printf("Enter a telephone number in the form (xxx) xxx-xxxx: ");
    scanf(" ( %d ) %d - %d", &areacode, &prefix, &linenum);

    printf("%d.%d.%d\n", areacode, prefix, linenum);

    return 0;
}
