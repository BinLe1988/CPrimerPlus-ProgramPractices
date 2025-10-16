//
// Created by RichardL on 2025/10/16.
//
#include <stdio.h>

int main(void) {
    int a = 10000000000000;
    float b, c;

    b = 2.0e20 + 1.0;
    c = b - 2.0e20;
    printf("%d\n", a);
    printf("%f\n", c);

    return 0;
}