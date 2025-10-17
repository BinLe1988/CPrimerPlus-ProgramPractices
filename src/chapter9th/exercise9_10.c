//
// Created by RichardL on 2025/10/17.
//
#include <stdio.h>
void to_base_n(int num, int bit);

int main(void) {
    to_base_n(129, 8);
}

void to_base_n(int num, int bit) {
    if (bit < 2 || bit > 10) {
        printf("error: bit must be between 2 and 10\n");
    }

    int octal_digits[32];  // 存储进制的每一位（足够存储int范围的数）
    int count = 0;         // 记录进制的位数
    while (num != 0) {
        octal_digits[count++] = num % bit;  // 取余数
        num = num / bit;                    // 更新商
    }
    // 倒序输出余数（高位在后，需反转）
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", octal_digits[i]);
    }
    return;
}
