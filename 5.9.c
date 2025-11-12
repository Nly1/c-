#include <stdio.h>
int main() {
    char ch;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    printf("输入一行字符：");
    while ((ch = getchar()) != '\n') {  // 读取到换行符结束
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letters++;
        } else if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            others++;
        }
    }
    printf("字母：%d，空格：%d，数字：%d，其他：%d\n", letters, spaces, digits, others);
    return 0;
}
