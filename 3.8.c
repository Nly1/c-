#include <stdio.h>

int main() {
    int num, hundreds, tens, units; // �洢��λ�������İ�λ��ʮλ����λ
    printf("������һ����λ��������");
    scanf("%d", &num);

    // ����1��У�������Ƿ�Ϊ��λ����100-999��
    if (num < 100 || num > 999) {
        printf("�������������100-999֮�����λ��������\n");
        return 1; // �쳣�˳������������Ч
    }

    // ����2�������λ����ÿһλ
    hundreds = num / 100;          // ��λ������100ȡ�̣���153/100=1��
    tens = (num % 100) / 10;       // ʮλ��ȡ��100�����10����153%100=53��53/10=5��
    units = num % 10;              // ��λ��ȡ��10����153%10=3��

    // ����3���ж��Ƿ�����ˮ�ɻ�����������λ�����͵���ԭ����
    if (hundreds*hundreds*hundreds + tens*tens*tens + units*units*units == num) {
        printf("%d ��ˮ�ɻ���\n", num);
    } else {
        printf("%d ����ˮ�ɻ���\n", num);
    }

    return 0;
}
