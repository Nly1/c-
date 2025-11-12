#include <stdio.h>
#define N 3  // 奇数阶，可改为5、7等
int main() {
    int magic[N][N] = {0};
    int i = 0, j = N/2;  // 起始位置：第一行中间列
    int num;

    for (num = 1; num <= N*N; num++) {
        magic[i][j] = num;
        // 计算下一个位置（上一行、右一列）
        int ni = (i - 1 + N) % N;
        int nj = (j + 1) % N;
        // 若目标位置为空，则移动；否则下一行
        if (magic[ni][nj] == 0) {
            i = ni;
            j = nj;
        } else {
            i = (i + 1) % N;
        }
    }

    // 打印魔方阵
    printf("%d阶魔方阵：\n", N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", magic[i][j]);
        }
        printf("\n");
    }
    return 0;
}
