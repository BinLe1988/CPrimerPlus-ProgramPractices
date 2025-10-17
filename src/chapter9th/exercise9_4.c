//
// Created by RichardL on 2025/10/17.
//
#include <stdio.h>
double tiaohe_average(double a, double b);

int main(void) {
    printf("double a = %.1f, double b = %.1f, their tiaohe average double = %.1f", 8.0, 9.0, tiaohe_average(8.0, 9.0));

    return 0;
}

double tiaohe_average(double a, double b) {
    return 1/((1/a + 1/b) / 2);
}

