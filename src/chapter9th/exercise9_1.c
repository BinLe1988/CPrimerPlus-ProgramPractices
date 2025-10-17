//
// Created by RichardL on 2025/10/17.
//
#include <stdio.h>
double min(double a, double b);

int main(void) {
    printf("the min number is: %.1f\n", min(5.0, 3.1));

    return 0;
}

double min(double x, double y) {
    return x > y ? y : x;
}
