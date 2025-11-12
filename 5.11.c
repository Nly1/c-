#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "apple";
    int len = strlen(a);
    int i, temp;
    // 首尾交换字符
    for (i = 0; i < len/2; i++) {
        temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }
    printf("反转后：%s\n", a);  // 输出：elppa
    return 0;
}
