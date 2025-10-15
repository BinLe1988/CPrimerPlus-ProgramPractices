//
// Created by RichardL on 2025/10/15.
//
#include <stdio.h>

void smile(void);

int main(void) {
    for (int i = 1; i <= 3; i++) {
        smile();
    }
    printf("\n");
    for (int i = 1; i <= 2; i++) {
        smile();
    }
    printf("\n");
    smile();
    printf("\n");
    return 0;
}

void smile(void) {
    printf("Smile!");
}