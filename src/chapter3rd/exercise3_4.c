//
// Created by RichardL on 2025/10/16.
//
#include <stdio.h>

int main() {
    float a;
    scanf("Enter a floating-point value: %f\n", &a);
    printf("fixed-point notation: %.f\n", a);
    printf("exponential notation: %e\n", a);

    return 0;
}