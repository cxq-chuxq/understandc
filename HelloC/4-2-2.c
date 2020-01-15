#include <stdio.h>
int main(int argc, char const *argv[]) {
    int a, b, c, i, sum = 0;
    printf("输入一个整数");
    scanf("%d", &a);
    printf("输入一个整数");
    scanf("%d", &b);

    if (a > b) {
        c = a;
        a = b;
        b = c;
    }

    for (i = a + 1; i < b; i++) {
        sum = sum + i;
    }

    printf("所有整数的和为:%d\n", sum);
    return 0;
}