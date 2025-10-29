#include <stdio.h>

int main() {
    int num, digit1=0, digit2=0, digit3=0, digit4=0, digit5=0; // 存储数字及各位
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &num);

    // 校验输入：确保是正整数且不超过5位（1-99999）
    if (num < 1 || num > 99999) {
        printf("输入错误！请输入1-99999之间的正整数。\n");
        return 1;
    }

    // 步骤1：通过范围判断位数，用switch标记位数（num_range为1-5对应1-5位数）
    int num_range;
    if (num >= 1 && num <= 9) num_range = 1;
    else if (num <= 99) num_range = 2;
    else if (num <= 999) num_range = 3;
    else if (num <= 9999) num_range = 4;
    else num_range = 5;

    // 步骤2：switch分支拆分每一位数字（按5位最大长度拆分，高位补0不影响结果）
    switch (num_range) {
        case 5:
            digit5 = num / 10000;       // 万位：除以10000取商
            digit4 = (num % 10000)/1000;// 千位：取余10000后除以1000
        case 4:
            digit3 = (num % 1000)/100;  // 百位：取余1000后除以100
        case 3:
            digit2 = (num % 100)/10;    // 十位：取余100后除以10
        case 2:
            digit1 = num % 10;          // 个位：取余10
        case 1:
            break; // 利用case穿透，减少重复代码（5位数需执行case5-1，1位数仅执行case1）
    }

    // 步骤3：按switch确定的位数，打印结果
    switch (num_range) {
        case 1:
            printf("位数：1位\n");
            printf("每一位数字：%d\n", digit1);
            printf("逆序打印：%d\n", digit1);
            break;
        case 2:
            printf("位数：2位\n");
            printf("每一位数字：%d, %d\n", digit2, digit1);
            printf("逆序打印：%d%d\n", digit1, digit2);
            break;
        case 3:
            printf("位数：3位\n");
            printf("每一位数字：%d, %d, %d\n", digit3, digit2, digit1);
            printf("逆序打印：%d%d%d\n", digit1, digit2, digit3);
            break;
        case 4:
            printf("位数：4位\n");
            printf("每一位数字：%d, %d, %d, %d\n", digit4, digit3, digit2, digit1);
            printf("逆序打印：%d%d%d%d\n", digit1, digit2, digit3, digit4);
            break;
        case 5:
            printf("位数：5位\n");
            printf("每一位数字：%d, %d, %d, %d, %d\n", digit5, digit4, digit3, digit2, digit1);
            printf("逆序打印：%d%d%d%d%d\n", digit1, digit2, digit3, digit4, digit5);
            break;
    }

    return 0;
}
