#include <stdio.h>

int main() {
    int number;

    // 讀取一個整數
    printf("Enter an integer: ");
    scanf("%d", &number);

    // 使用餘數判斷奇偶性
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    }
    else {
        printf("%d is odd.\n", number);
    }

    return 0;
}