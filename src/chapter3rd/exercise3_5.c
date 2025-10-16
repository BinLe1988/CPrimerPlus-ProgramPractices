//
// Created by RichardL on 2025/10/16.
//
#include <stdio.h>

int main(void) {
    int age;
    scanf("input your age: %d\n", &age);
    float second = 3.156e7 * age;
    printf("the second of age is: %e\n", second);

    return 0;
}