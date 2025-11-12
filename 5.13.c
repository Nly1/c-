#include <stdio.h>
int main() {
    double height = 100;  
    double total = height;  
    int i;

    for (i = 1; i < 10; i++) {  
        height /= 2;  
        total += 2 * height;  
    }
    height /= 2;  

    printf("第10次落地时共经过：%.2f米\n", total);
    printf("第10次反弹高度：%.2f米\n", height);
    return 0;
}
