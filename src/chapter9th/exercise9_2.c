//
// Created by RichardL on 2025/10/17.
//
#include <stdio.h>
void chline(char ch, int column, int row);

int main(void) {
    chline('*', 3, 4);

    return 0;
}

void chline(char ch, int i, int j) {
    int row, col;
    for (row = 0; row < j; row++) {
        for (col = 0; col < i; col++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}