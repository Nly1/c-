#include <stdio.h>
#define N 5
int main() {
    int arr[N] = {3, 1, 4, 2, 5};
    int i, j, temp;
    // 冒泡排序（从大到小）
    for (i = 0; i < N-1; i++) {
        for (j = 0; j < N-1-i; j++) {
            if (arr[j] < arr[j+1]) {  // 小的元素后移
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // 输出结果
    for (i = 0; i < N; i++) printf("%d ", arr[i]);
    return 0;
}
