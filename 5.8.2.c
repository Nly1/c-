#include <stdio.h>
#define N 5
int main() {
    int arr[N] = {3, 1, 4, 2, 5};
    int i, j, temp, max_idx;
    // 选择排序（从大到小）
    for (i = 0; i < N-1; i++) {
        max_idx = i;  // 假设当前位置是最大值
        for (j = i+1; j < N; j++) {
            if (arr[j] > arr[max_idx]) max_idx = j;
        }
        // 交换当前位置与最大值位置的元素
        temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
    // 输出结果
    for (i = 0; i < N; i++) printf("%d ", arr[i]);
    return 0;
}
