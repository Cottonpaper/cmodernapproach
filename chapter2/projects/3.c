#include <stdio.h>

#define PI 3.1415f

int main(void) {
    float radius, volume;

    printf("Enter the radius of a sphere to compute it's volume:\n");
    scanf("%f", &radius);
    volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("A sphere of radius %.0f has a volume of %f\n", radius, volume);
    return 0;
}
