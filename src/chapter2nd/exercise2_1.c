#include <stdio.h>
//
// Created by RichardL on 2025/10/15.
//
int main(void) {
    char first_name[] = "Bin";
    char last_name[] = "Le";
    printf("%s %s\n", first_name, last_name);
    printf("%s\n%s\n", first_name, last_name);
    printf("%s ", first_name);
    printf("%s", last_name);
    return 0;
}