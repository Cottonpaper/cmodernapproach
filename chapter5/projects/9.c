#include <stdio.h>

int main(void) {
    int fMonth, fDay, fYear;
    int sMonth, sDay, sYear;


    printf("Enter first date (mm/dd/yy): ");
    scanf("%d / %d / %d", &fMonth, &fDay, &fYear);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d / %d / %d", &sMonth, &sDay, &sYear);

    if(fYear < sYear) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                fMonth, fDay, fYear, sMonth, sDay, sYear);
    }
    else if(sYear < fYear) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                sMonth, sDay, sYear, fMonth, fDay, fYear);
    }
    else if(fMonth < sMonth) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                fMonth, fDay, fYear, sMonth, sDay, sYear);
    }
    else if(sMonth < fMonth) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                sMonth, sDay, sYear, fMonth, fDay, fYear);
    }
    else if(fDay < sDay) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                fMonth, fDay, fYear, sMonth, sDay, sYear);
    }
    else if(sDay < fDay) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
                sMonth, sDay, sYear, fMonth, fDay, fYear);
    }
    else printf("Dates are equal.\n");

    return 0;
}
