#include <stdio.h>

int main() {
    int a, b, c;
    printf("number\tsquare\tcube\n");
    for (int i = 1;i < 11;i++)
    {
        a = i;
        b = i * i;
        c = i * i * i;
        printf("%d\t%d\t%d\t\n", a, b, c);
    }return 0;
}