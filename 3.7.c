#include <stdio.h>

int main() {
    // ���帡���ͱ����洢�ɼ���֧��С������89.5��
    float score;
    // ������ʾ
    printf("������ѧ���ĳɼ���0-100�֣�֧��С������");
    scanf("%f", &score);

    // ����1���ɼ��Ϸ���У�飨��Χ0-100����������ʾ����
    if (score < 0 || score > 100) {
        printf("������ʾ������ĳɼ�����0-100֮�䣬���������룡\n");
        return 1; // �쳣�˳������ط�0ֵ��ʶ����
    }

    // ����2�����ݳɼ���Χ�ж��ȼ�����if-else��֧���߼������׶���
    char grade;
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) { // ����������score < 90
        grade = 'B';
    } else if (score >= 70) { // ����������score < 80
        grade = 'C';
    } else if (score >= 60) { // ����������score < 70
        grade = 'D';
    } else { // ����������score < 60
        grade = 'E';
    }

    // ����3��������յȼ�
    printf("��ѧ���ĳɼ��ȼ�Ϊ��%c\n", grade);
    return 0;
}
