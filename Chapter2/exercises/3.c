#include <stdio.h>

int main(void) {
    int height = 8, length = 12, width = 10;
    int volume = height * length * width;

    printf("Volume (cubic inches):%d\n", volume);
    printf("Dimensional Weight:%d\n", ((volume + 165) / 166));
}
