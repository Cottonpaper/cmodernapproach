// When compiling with GCC and a pre-c99 standard flag with -Wall,
// the compiler warns: control reaches end of non-void function

#include <stdio.h>

int main(void) {
    printf("Hello world\n");
}
