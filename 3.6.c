#include <stdio.h>

int main() {
    int num, digit1=0, digit2=0, digit3=0, digit4=0, digit5=0; // �洢���ּ���λ
    printf("������һ��������5λ����������");
    scanf("%d", &num);

    // У�����룺ȷ�����������Ҳ�����5λ��1-99999��
    if (num < 1 || num > 99999) {
        printf("�������������1-99999֮�����������\n");
        return 1;
    }

    // ����1��ͨ����Χ�ж�λ������switch���λ����num_rangeΪ1-5��Ӧ1-5λ����
    int num_range;
    if (num >= 1 && num <= 9) num_range = 1;
    else if (num <= 99) num_range = 2;
    else if (num <= 999) num_range = 3;
    else if (num <= 9999) num_range = 4;
    else num_range = 5;

    // ����2��switch��֧���ÿһλ���֣���5λ��󳤶Ȳ�֣���λ��0��Ӱ������
    switch (num_range) {
        case 5:
            digit5 = num / 10000;       // ��λ������10000ȡ��
            digit4 = (num % 10000)/1000;// ǧλ��ȡ��10000�����1000
        case 4:
            digit3 = (num % 1000)/100;  // ��λ��ȡ��1000�����100
        case 3:
            digit2 = (num % 100)/10;    // ʮλ��ȡ��100�����10
        case 2:
            digit1 = num % 10;          // ��λ��ȡ��10
        case 1:
            break; // ����case��͸�������ظ����루5λ����ִ��case5-1��1λ����ִ��case1��
    }

    // ����3����switchȷ����λ������ӡ���
    switch (num_range) {
        case 1:
            printf("λ����1λ\n");
            printf("ÿһλ���֣�%d\n", digit1);
            printf("�����ӡ��%d\n", digit1);
            break;
        case 2:
            printf("λ����2λ\n");
            printf("ÿһλ���֣�%d, %d\n", digit2, digit1);
            printf("�����ӡ��%d%d\n", digit1, digit2);
            break;
        case 3:
            printf("λ����3λ\n");
            printf("ÿһλ���֣�%d, %d, %d\n", digit3, digit2, digit1);
            printf("�����ӡ��%d%d%d\n", digit1, digit2, digit3);
            break;
        case 4:
            printf("λ����4λ\n");
            printf("ÿһλ���֣�%d, %d, %d, %d\n", digit4, digit3, digit2, digit1);
            printf("�����ӡ��%d%d%d%d\n", digit1, digit2, digit3, digit4);
            break;
        case 5:
            printf("λ����5λ\n");
            printf("ÿһλ���֣�%d, %d, %d, %d, %d\n", digit5, digit4, digit3, digit2, digit1);
            printf("�����ӡ��%d%d%d%d%d\n", digit1, digit2, digit3, digit4, digit5);
            break;
    }

    return 0;
}
