#include <stdio.h>

int main() {
    // 圖形的行數和寬度
    char shape1[100][100] = { // 矩形
        "********",
        "*      *",
        "*      *",
        "*      *",
        "*      *",
        "*      *",
        "*      *",
        "*      *",
        "********"
    };

    char shape2[100][100] = { // 橢圓
        "  ***  ",
        " *   * ",
        "*     *",
        "*     *",
        "*     *",
        "*     *",
        "*     *",
        " *   * ",
        "  ***  "
    };

    char shape3[100][100] = { // 箭頭
        "  *  ",
        " *** ",
        "*****",
        "  *  ",
        "  *  ",
        "  *  ",
        "  *  ",
        "  *  ",
        "  *  "
    };

    char shape4[100][100] = { // 菱形
        "    *    ",
        "   * *   ",
        "  *   *  ",
        " *     * ",
        "*       *",
        " *     * ",
        "  *   *  ",
        "   * *   ",
        "    *    "
    };

    // 打印每一行的四個圖形
    for (int i = 0; i < 20; i++) {
        printf("%s   %s   %s   %s\n", shape1[i], shape2[i], shape3[i], shape4[i]);
    }

    return 0;
}