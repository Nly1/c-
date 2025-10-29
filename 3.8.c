#include <stdio.h>

int main() {
    int num, hundreds, tens, units; // 存储三位数及它的百位、十位、个位
    printf("请输入一个三位正整数：");
    scanf("%d", &num);

    // 步骤1：校验输入是否为三位数（100-999）
    if (num < 100 || num > 999) {
        printf("输入错误！请输入100-999之间的三位正整数。\n");
        return 1; // 异常退出，标记输入无效
    }

    // 步骤2：拆分三位数的每一位
    hundreds = num / 100;          // 百位：除以100取商（如153/100=1）
    tens = (num % 100) / 10;       // 十位：取余100后除以10（如153%100=53，53/10=5）
    units = num % 10;              // 个位：取余10（如153%10=3）

    // 步骤3：判断是否满足水仙花数条件（各位立方和等于原数）
    if (hundreds*hundreds*hundreds + tens*tens*tens + units*units*units == num) {
        printf("%d 是水仙花数\n", num);
    } else {
        printf("%d 不是水仙花数\n", num);
    }

    return 0;
}
