#include <stdio.h>

int main() {
    int number;

    // Ū���@�Ӿ��
    printf("Enter an integer: ");
    scanf("%d", &number);

    // �ϥξl�ƧP�_�_����
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    }
    else {
        printf("%d is odd.\n", number);
    }

    return 0;
}