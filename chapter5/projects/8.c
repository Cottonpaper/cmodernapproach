#include <stdio.h>

int main(void) {
    int hour, minute, time;
    int dep1,dep2,dep3,dep4,dep5,dep6,dep7,dep8;


    dep1 = 480, dep2 = 583, dep3 = 679, dep4 = 767,
    dep5 = 840, dep6 = 945, dep7 = 1140, dep8 = 1305;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);

    time = (hour * 60) + minute;

    if(time >= dep7) {
        (time - dep7) < (dep8 - time)
            ? printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n")
            : printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }
    else if(time >= dep6) {
        (time - dep6) < (dep7 - time)
            ? printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n")
            : printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else if(time >= dep5) {
        (time - dep5) < (dep6 - time)
            ? printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n")
            : printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if(time >= dep4) {
        (time - dep4) < (dep5 - time)
            ? printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n")
            : printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if(time >= dep3) {
        (time - dep3) < (dep4 - time)
            ? printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n")
            : printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if(time >= dep2) {
        (time - dep2) < (dep3 - time)
            ? printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n")
            : printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if(time >= dep1) {
        (time - dep1) < (dep2 - time)
            ? printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n")
            : printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    }

    return 0;
}
