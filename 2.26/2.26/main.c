#include <stdio.h>

int main() {
    int num1, num2;

    // Ū����Ӿ��
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // �P�_�O�_�O����
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