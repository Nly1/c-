#include <stdio.h>

int main() {
    // 定义浮点型变量存储成绩（支持小数，如89.5）
    float score;
    // 输入提示
    printf("请输入学生的成绩（0-100分，支持小数）：");
    scanf("%f", &score);

    // 步骤1：成绩合法性校验（范围0-100，超出则提示错误）
    if (score < 0 || score > 100) {
        printf("出错提示：输入的成绩不在0-100之间，请重新输入！\n");
        return 1; // 异常退出，返回非0值标识错误
    }

    // 步骤2：根据成绩范围判定等级（用if-else分支，逻辑清晰易读）
    char grade;
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) { // 隐含条件：score < 90
        grade = 'B';
    } else if (score >= 70) { // 隐含条件：score < 80
        grade = 'C';
    } else if (score >= 60) { // 隐含条件：score < 70
        grade = 'D';
    } else { // 隐含条件：score < 60
        grade = 'E';
    }

    // 步骤3：输出最终等级
    printf("该学生的成绩等级为：%c\n", grade);
    return 0;
}
