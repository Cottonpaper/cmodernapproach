#include <stdio.h>
#include <stdbool.h>

#define AM true
#define PM false

int main(void) {
    int hour, minute;
    bool period;    //am = true, pm = false


    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);

    if(hour >= 13) {
        if(hour == 24)
            period = AM;
        else
            period = PM;
        switch(hour) {
            case 13:
                hour -= 12;
                break;
            case 14:
                hour -= 12;
                break;
            case 15:
                hour -= 12;
                break;
            case 16:
                hour -= 12;
                break;
            case 17:
                hour -= 12;
                break;
            case 18:
                hour -= 12;
                break;
            case 19:
                hour -= 12;
                break;
            case 20:
                hour -= 12;
                break;
            case 21:
                hour -= 12;
                break;
            case 22:
                hour -= 12;
                break;
            case 23:
                hour -= 12;
                break;
            case 24:
                hour -= 12;
                break;
        }
    }
    else {
        period = AM;
    }

    if(period == AM) {
        printf("Equivalent 12-hour time: %d:%d AM\n", hour, minute);
    }
    else {
        printf("Equivalent 12-hour time: %d:%d PM\n", hour, minute);
    }

    return 0;
}
