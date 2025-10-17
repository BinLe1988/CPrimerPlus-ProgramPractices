//
// Created by RichardL on 2025/10/17.
//
#include <math.h>
#include <stdio.h>
void switch_double(double * a, double * b, double * c);

void switch_double(double * a, double * b, double * c) {
    double min1 = fmin(*a, *b);
    double min2 = fmin(*c, *b);
    double min3 = fmin(min1, min2);
    a = &min3;
    double second_min = fmax(min1, min2);
    b = &second_min;
    double max1 = fmax(*a, *b);
    double max2 = fmax(*c, *b);
    double max3 = fmax(max1, max2);
    c = &max3;
    printf("a=%p, b=%p, c=%p\n", a, b, c);
}