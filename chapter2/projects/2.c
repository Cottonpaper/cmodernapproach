#include <stdio.h>

#define PI 3.1415f

int main(void) {
    float radius = 10.0f;
    float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("A sphere of radius %.0f has a volume of %f\n", radius, volume);
    return 0;
}
