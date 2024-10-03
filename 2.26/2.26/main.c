#include <stdio.h>

int main() {
    int num1, num2;

    // 讀取兩個整數
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // 判斷是否是倍數
    if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
    }
    else if (num1 % num2 == 0) {
        printf("%d is a multiple of %d\n", num1, num2);
    }
    else {
        printf("%d is not a multiple of %d\n", num1, num2);
    }

    return 0;
}