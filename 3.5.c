#include <stdio.h>

int main() {
    // ����������Ա��ַ��ͣ������أ������ͣ�֧��С�����أ�����Ѫ�������ͣ�
    char gender;
    float weight;
    int blood_volume;

    // ������ʾ�����ݶ�ȡ
    printf("��������Ѫ���Ա�������M��Ů����F����");
    scanf(" %c", &gender);  // %cǰ�ӿո񣬱����ȡǰ������Ļ��з�
    printf("��������Ѫ�����أ���λ�������");
    scanf("%f", &weight);

    // �����쳣ֵУ�飨����Χ10-200���������Ч���ݣ�
    if (weight < 10 || weight > 200) {
        printf("��������������쳣����ȷ�Ϻ��������룡\n");
        return 1;  // �쳣�˳������ط�0ֵ��ʶ����
    }

    // �����Ա�������ж���Ѫ��
    if (gender == 'M' || gender == 'm') {  // ֧�ִ�дM��Сдm����
        blood_volume = (weight > 120) ? 200 : 180;
    } else if (gender == 'F' || gender == 'f') {  // ֧�ִ�дF��Сдf����
        blood_volume = (weight > 100) ? 150 : 120;
    } else {
        printf("������Ա��ʽ���󣬽�֧��M/m���У���F/f��Ů����\n");
        return 1;  // �쳣�˳�
    }

    // ������
    printf("����Ѫ�ߵĽ�����Ѫ��Ϊ��%d ����\n", blood_volume);
    return 0;
}
