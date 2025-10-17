#include <stdio.h>
//
// Created by RichardL on 2025/10/17.
//
double larger_of(double x, double y);

int main(void) {
    double x = 1.0;
    double y = 2.0;
    printf("larger_of(x, y) = %.1f\n", larger_of(x, y));
}

double larger_of(double x, double y) {
    return x > y ? x : y;
}