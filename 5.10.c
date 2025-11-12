#include <stdio.h>
#define N 5
int main() {
    int mat[N][N] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int sum = 0, i;
    // 主对角线（i==j） + 副对角线（i+j==N-1）
    for (i = 0; i < N; i++) {
        sum += mat[i][i];          // 主对角线
        sum += mat[i][N-1-i];      // 副对角线
    }
    // 注意：中心元素（i=2,j=2）被重复加了一次，需减去
    sum -= mat[N/2][N/2];
    printf("对角线元素之和：%d\n", sum);
    return 0;
}
