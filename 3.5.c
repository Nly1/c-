#include <stdio.h>

int main() {
    // 定义变量：性别（字符型）、体重（浮点型，支持小数体重）、输血量（整型）
    char gender;
    float weight;
    int blood_volume;

    // 输入提示与数据读取
    printf("请输入输血者性别（男输入M，女输入F）：");
    scanf(" %c", &gender);  // %c前加空格，避免读取前序输入的换行符
    printf("请输入输血者体重（单位：公斤）：");
    scanf("%f", &weight);

    // 体重异常值校验（合理范围10-200公斤，避免无效数据）
    if (weight < 10 || weight > 200) {
        printf("输入的体重数据异常，请确认后重新输入！\n");
        return 1;  // 异常退出，返回非0值标识错误
    }

    // 根据性别和体重判断输血量
    if (gender == 'M' || gender == 'm') {  // 支持大写M和小写m输入
        blood_volume = (weight > 120) ? 200 : 180;
    } else if (gender == 'F' || gender == 'f') {  // 支持大写F和小写f输入
        blood_volume = (weight > 100) ? 150 : 120;
    } else {
        printf("输入的性别格式错误，仅支持M/m（男）或F/f（女）！\n");
        return 1;  // 异常退出
    }

    // 输出结果
    printf("该输血者的建议输血量为：%d 毫升\n", blood_volume);
    return 0;
}
